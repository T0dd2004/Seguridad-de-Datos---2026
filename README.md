
#  Seguridad de Datos – Bitácora de Clase

**Alumno:** Derek Todd López  
**Repositorio:** Seguridad-de-Datos2026  
**Materia:** Seguridad de Datos  
**Docente:** Tuxtter  

---

## Sesión: Modelo OSI, TCP/IP y Fundamentos de Seguridad en Redes

---

## Objetivo de la Clase

Comprender el funcionamiento del modelo OSI y su relación con TCP/IP, identificar vulnerabilidades en cada capa y analizar cómo se clasifican los ataques dentro de la seguridad informática.

---

## Modelo OSI vs TCP/IP

El modelo OSI divide la comunicación en red en 7 capas:

| Capa | Nombre | Equivalencia TCP/IP | Función Principal |
|------|--------|--------------------|------------------|
| 7 | Aplicación | Aplicación | Interacción con el usuario (HTTP, Gmail, URLs) |
| 6 | Presentación | Aplicación | Cifrado, compresión (SSL/TLS) |
| 5 | Sesión | Aplicación | Control de sesiones |
| 4 | Transporte | Transporte | Puertos y control de flujo (TCP/UDP) |
| 3 | Red | Red | Direccionamiento lógico (IP) |
| 2 | Enlace de Datos | Enlace | Direccionamiento físico (MAC) |
| 1 | Física | Física | Transmisión de bits (cable, fibra) |

El modelo TCP/IP agrupa estas funciones en cuatro capas principales:
- Aplicación
- Transporte
- Red
- Acceso a la red

El modelo OSI facilita la clasificación de ataques y el análisis de vulnerabilidades.

---

## Capa 2 – Enlace de Datos

### MAC Address
- Dirección física única del dispositivo.
- No es enrutable.
- Utilizada por switches para reenviar tráfico.

 El switch trabaja con direcciones MAC, no con IP.

### Ataques en esta capa
- MAC Address Spoofing  
- ARP Poisoning  
- DHCP Poisoning  
- VLAN Hopping  
- STP Manipulation  

### Medidas de seguridad
- 802.1X  
- Port Security  
- Dynamic ARP Inspection  
- Segmentación por VLAN  

---

## Capa 3 – Red

Trabaja con direcciones IP (ejemplo: 192.168.1.1).

### Ataques comunes
- IP Spoofing  
- ICMP Flood  
- Smurf Attack  
- Routing Table Poisoning  

### Medidas de protección
- Firewalls  
- ACLs  
- IDS/IPS  
- Filtrado ICMP  

---

## Capa 4 – Transporte

Existen 65,536 puertos que identifican servicios y aplicaciones.

| Puerto | Servicio |
|--------|----------|
| 80 | HTTP |
| 443 | HTTPS |
| 22 | SSH |
| 21 | FTP |
| 25 | SMTP |
| 53 | DNS |
| 110 | POP3 |
| 143 | IMAP |
| 3306 | MySQL |
| 1433 | SQL Server |
| 3389 | RDP |

### TCP vs UDP

| TCP | UDP |
|------|------|
| Orientado a conexión | No orientado a conexión |
| Usa 3-Way Handshake | No utiliza handshake |
| Control de errores | No verifica errores |
| Más seguro | Más rápido |

#### 3-Way Handshake
1. SYN  
2. SYN-ACK  
3. ACK  

### Ataques en Capa 4
- Port Scanning  
- SYN Flood  
- UDP Flood  
- Session Hijacking  

---

##  Reconocimiento y Port Scanning

El port scanning forma parte de la fase de reconocimiento en pentesting.

Herramientas mencionadas en clase:
- Nmap  
- Netcat  
- Masscan  

También se explicó el concepto de Banner Grabbing, técnica que permite identificar:
- Tipo de servicio
- Versión
- Sistema operativo

---

##  Tipos de Hackers

- White Hat – Hackers éticos autorizados  
- Black Hat – Hackers maliciosos  
- Gray Hat – Intermedio  
- Script Kiddie – Uso de herramientas sin conocimiento profundo  
- Hacktivista – Motivación ideológica o política  
- Insider – Empleado o ex empleado con acceso legítimo  

---

##  Pentesting

### Tipos de prueba
- Caja Blanca  
- Caja Negra  
- Caja Gris  

### Fases
1. Reconocimiento  
2. Footprinting  
3. Network Mapping  
4. Identificación de servicios  
5. Análisis de vulnerabilidades  
6. Obtención de acceso  
7. Escalada de privilegios  

Concepto adicional:
- Daisy Chaining  

---

##  SIEM

El SIEM permite:
- Centralizar logs
- Detectar incidentes
- Correlacionar eventos
- Responder ante ataques

Es fundamental para la seguridad en entornos empresariales.

---

##  Clasificación de Ataques por Capa OSI

| Ataque | Capa |
|--------|------|
| MAC Spoofing | 2 |
| ARP Poisoning | 2 |
| IP Spoofing | 3 |
| Port Scanning | 4 |
| Session Hijacking | 5 |
| SSL Stripping | 6 |
| SQL Injection | 7 |

Clasificar los ataques por capa facilita su análisis, auditoría y mitigación.

---

##  Conceptos Clave

- Flaw: Falla de diseño  
- Exploit: Código que aprovecha una vulnerabilidad  
- Payload: Acción ejecutada después de la explotación  
- Patch: Corrección de seguridad  
- Zero-Day: Vulnerabilidad sin parche disponible 
