SSLEngine on
SSLProtocol all -SSLv2 -SSLv3
SSLCipherSuite HIGH:3DES:!aNULL:!MD5:!SEED:!IDEA
#SSLCipherSuite ALL:!ADH:!EXPORT:!SSLv2:RC4+RSA:+HIGH:+MEDIUM:+LOW

## 생성한 SSL 인증서와 개인키
SSLCertificateFile    /etc/httpd/ssl/hanajava.net.crt
SSLCertificateKeyFile /etc/httpd/ssl/hanajava.net.key
SSLCACertificateFile  /etc/httpd/ssl/hanajava.net.ca.crt

BrowserMatch "MSIE [2-5]" \
             nokeepalive ssl-unclean-shutdown \
             downgrade-1.0 force-response-1.0
