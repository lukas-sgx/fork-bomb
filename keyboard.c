/*
** EPITECH PROJECT, 2025
** /home/lukas/epitech/hub/84shell
** File description:
** keyboard
*/

#define _POSIX_C_SOURCE 200809L
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void my_sigint_handler(int sig) {
    (void)sig;
}

void stop_sigint(void) {
    struct sigaction sa = {0};

    sa.sa_handler = my_sigint_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGINT, &sa, NULL);
    sigaction(SIGTSTP, &sa, NULL);
    sigaction(SIGQUIT, &sa, NULL);  
    sigaction(SIGTERM, &sa, NULL);
    sigaction(SIGHUP, &sa, NULL);
    sigaction(SIGPIPE, &sa, NULL);
    sigaction(SIGALRM, &sa, NULL);
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    sigaction(SIGCHLD, &sa, NULL);
    sigaction(SIGCONT, &sa, NULL);
    sigaction(SIGSTOP, &sa, NULL);
    sigaction(SIGTTOU, &sa, NULL);
    sigaction(SIGTTIN, &sa, NULL);
    sigaction(SIGBUS, &sa, NULL);
    sigaction(SIGFPE, &sa, NULL);
    sigaction(SIGILL, &sa, NULL);
    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGTRAP, &sa, NULL);
    sigaction(SIGURG, &sa, NULL);
    sigaction(SIGXCPU, &sa, NULL);
    sigaction(SIGXFSZ, &sa, NULL);
    sigaction(SIGVTALRM, &sa, NULL);
    sigaction(SIGPROF, &sa, NULL);
    sigaction(SIGWINCH, &sa, NULL);
    sigaction(SIGIO, &sa, NULL);
    sigaction(SIGPWR, &sa, NULL);
    sigaction(SIGSYS, &sa, NULL);
}