SSLEngine on
SSLProtocol all -SSLv2 -SSLv3
SSLCipherSuite HIGH:MEDIUM:!SSLv2:!PSK:!SRP:!ADH:!AECDH

SSLCertificateFile "/etc/httpd/cert/star_ezwel_com_cert.pem"
SSLCertificateKeyFile "/etc/httpd/cert/star_ezwel_com_key.pem"
SSLCertificateChainFile "/etc/httpd/cert/Chain_RootCA_Bundle.crt"

BrowserMatch "MSIE [2-5]" \
             nokeepalive ssl-unclean-shutdown \
             downgrade-1.0 force-response-1.0