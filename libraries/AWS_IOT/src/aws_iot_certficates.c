/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAN2YtE848vqNawXet/DDXA2xgmNJMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMzA4MDgxNzI0\n\
MjZaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC7C4Gpd6Yx2aYTaM94\n\
gdLawHSErNZ2P/EHANJsWq2aE+5zH9KqEcZNySmuTfr6amBe5YjHV4HbGy7uG/oJ\n\
u3VWcy3aRwOqWe4ieT/LK03sYHTfCdgRNEbt+oC03i+hG/IuLEhscIikslCTcnq+\n\
eXHdLLZB9H5OA2I1fQL6dfYXahqZhQTX6DsN4z1/wXHaLARcUdlA5qKKWdAoGobM\n\
fRYdrm0L7SZC1Miyh54ByEKCQimvmZHhB9lqAeLoj9kMNj1Fk3qk1yhEkd4j3gIX\n\
Ga77OJ8G7qYxn+1Uin2o9sNcErVDByIhdIK4/yqCrMYMhMHC6FmQpZYGaDZ2uuSk\n\
YwA5AgMBAAGjYDBeMB8GA1UdIwQYMBaAFL0dHpTSueea7b38TiBTpNFjO1pFMB0G\n\
A1UdDgQWBBR6MZ5vG6ehR/F4g33GJfc1Dp4WlTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAGGjG6SHAR9rQ55tz3po9Raae\n\
1n9OncA9ynPigPbZU/UO9kkez5NUpdQFXpAeLU5qISC7n2dHgGDjvbKgpfb53AB5\n\
PD+GfGXKjsqc1u72hOcsG7EWYWmQmY+x4ubq1Drjf3dIhhcKgLCEEE//CyzazM5e\n\
tPy3vnm8w+aPLkyLBDHiHGUJX0Y4LZKanYtoWEFNU1IGWOOMqou4qIsala5hb8dh\n\
VP2fb2NH0bRWT5zO0aLIHQTtBUyMO3RwvXYeOlsCTGKhIJ24wVD2+Yk0agLDSDgH\n\
VMFk0mvPP/+bMHK00tioUzrTIxqsP+z2PGeWLFisMMOXrV0UhnLRUjTG5joAzQ==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEowIBAAKCAQEAuwuBqXemMdmmE2jPeIHS2sB0hKzWdj/xBwDSbFqtmhPucx/S\n\
qhHGTckprk36+mpgXuWIx1eB2xsu7hv6Cbt1VnMt2kcDqlnuInk/yytN7GB03wnY\n\
ETRG7fqAtN4voRvyLixIbHCIpLJQk3J6vnlx3Sy2QfR+TgNiNX0C+nX2F2oamYUE\n\
1+g7DeM9f8Fx2iwEXFHZQOaiilnQKBqGzH0WHa5tC+0mQtTIsoeeAchCgkIpr5mR\n\
4QfZagHi6I/ZDDY9RZN6pNcoRJHeI94CFxmu+zifBu6mMZ/tVIp9qPbDXBK1Qwci\n\
IXSCuP8qgqzGDITBwuhZkKWWBmg2drrkpGMAOQIDAQABAoIBAQCk+YUnwAyqM1o0\n\
DGHR3E/p+Y3L59ZQ/hzNHIB8aY5tM99BU3Qv5PWPbjqBLu6LKIBPswxtJlW2t8cw\n\
5SQoqVrZIUX0HGazPha3+VG3FT7pmjn672fP5Nga1rPm04IXC9sTtqM6YhdjjJNd\n\
Ob/heKRhfCpVChzNGlbo7pZN6vVfuAgjV/XtZaGyghPBlnvb0K8N1F9CcbixxMa6\n\
btG0dO3hyVgCFED39OPXHOmTw+d6Maz2kwLDSETSZg7et8+nHVJRxYQzxPpll4aS\n\
23M4Cme7xXN0rlCTZZHMpO/h37PnlaqXB9pgPL3S+ExwicRmH7l4/wQ/o5W5pOpp\n\
4n2CBmrBAoGBAN7AlT33bzkGsMLTmoCNY9PEyNn7P8A+gQV2BIuBMPXEJHpl/DZs\n\
22DTw1HVZFafnr5YYFZ822tnIoaOdJdhyzZr5JaTAJfndegM2ggbaR/0sVYjN+29\n\
PFgk9ctxjHrHShwDAebxn5TbXBl/cX/Er2FaTsZuSepopij2GmTn6uVFAoGBANb2\n\
ibuNCWzHPzTOS/pyy8p9Mgd6uMesPt0WXSRugNF4a2q5KSspnc1cD9lggFt/my9/\n\
iwi73gXDnfgLxsNTqcjnpLItrlLPbv2t2aDcbuPaaaspwEx922bnhYwm8Shuegpg\n\
Dl2teIAs8BOKy4GXTXf3Zg3MkJ1VHVsU9/p/xxxlAoGAcSwlZztcrfuBOSsrV17+\n\
tixH48AsTq8y/CRPANXdmzBRXEKOltRNzW8p0Fz7wqsMiyb5o1eCX5ohx31/LR6J\n\
kZfVps7/QS5fEEvfRrkuewbmRp5UHxzDGQGGRBvnxMWWGI9Kmxxt+MJOk8HVV5YF\n\
iQ/J8DU+prMOoMcQ9+2AwYUCgYBiEqDMHJCMPGst4GDxpqYrf+rvVqIvFvqnS6i7\n\
El9bMiFv04Jg2t/P7YydlFV7aUCX7wyzs2KcJp9Pp6/LNcRkkKqnUAgUZ+cvfb2o\n\
kmlVMzS6jpXZUCJlVIOtaabk12J+kUx8mMQ9VkNB5zTprun9LbY13XqtDUQTZgGt\n\
G9bvsQKBgDNfd7GJwkNVr8RPF1/tfQkJmvk8p+btj3Qc+daChLMv2/hKjNMHW6hT\n\
NgOAWUBouUtvSzBV5b+m82wi+dsQzLyeEgXbr623eMZ6pyH3laFz2wlp0N3m1aki\n\
mvkt7Xk4MOSgskDWLGGkAo1EfhqaZ7DLpvjpbEht1GPEOIeWkpaG\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
