#ifndef APR_NET_H
#define APR_NET_H 1

#include <apr_pools.h>
#include <apr_network_io.h>

apr_socket_t *
create_udp_client(apr_pool_t *context, char *ipaddr, apr_port_t port);

apr_socket_t *
create_udp_server(apr_pool_t *context, apr_port_t port, char *bind);

APR_DECLARE(apr_status_t) 
apr_sockaddr_ip_buffer_get(char *addr, int len, apr_sockaddr_t *sockaddr);

apr_socket_t *
create_mcast_server(apr_pool_t *context, char *mcast_ip, apr_port_t port, char *bind, char *interface);


#endif
