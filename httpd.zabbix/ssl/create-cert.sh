openssl x509 -req \
-days 3650 \
-extensions v3_ca \
-set_serial 1 \
-in /etc/httpd/ssl/hana-rootca.csr \
-signkey /etc/httpd/ssl/hana-rootca.key \
-out /etc/httpd/ssl/hana-rootca.crt \
-extfile rootca_openssl.conf
