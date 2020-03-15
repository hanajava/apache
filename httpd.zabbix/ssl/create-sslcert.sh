openssl x509 -req -days 1825 -extensions v3_user \
-in /etc/httpd/ssl/hana.net.csr \
-CA /etc/httpd/ssl/hana-rootca.crt -CAcreateserial \
-CAkey  /etc/httpd/ssl/hana-rootca.key \
-out /etc/httpd/ssl/hana.net.crt \
-extfile host_openssl.conf
