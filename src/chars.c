/*  Monkey HTTP Daemon
 *  ------------------
 *  Copyright (C) 2001-2010, Eduardo Silva P. <edsiper@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <stdio.h>

/* iso_8859_15 (man iso_8859_15) */
int get_char(int code)
{
    switch (code) {
        /* Perl is great :) */
    case 160:
        return ' ';
    case 161:
        return '�';
    case 162:
        return '�';
    case 163:
        return '�';
    case 164:
        return '�';
    case 165:
        return '�';
    case 166:
        return '�';
    case 167:
        return '�';
    case 168:
        return '�';
    case 169:
        return '�';
    case 170:
        return '�';
    case 171:
        return '�';
    case 172:
        return '�';
    case 173:
        return '�';
    case 174:
        return '�';
    case 175:
        return '�';
    case 176:
        return '�';
    case 177:
        return '�';
    case 178:
        return '�';
    case 179:
        return '�';
    case 180:
        return '�';
    case 181:
        return '�';
    case 182:
        return '�';
    case 183:
        return '�';
    case 184:
        return '�';
    case 185:
        return '�';
    case 186:
        return '�';
    case 187:
        return '�';
    case 188:
        return '�';
    case 189:
        return '�';
    case 190:
        return '�';
    case 191:
        return '�';
    case 192:
        return '�';
    case 193:
        return '�';
    case 194:
        return '�';
    case 195:
        return '�';
    case 196:
        return '�';
    case 197:
        return '�';
    case 198:
        return '�';
    case 199:
        return '�';
    case 200:
        return '�';
    case 201:
        return '�';
    case 202:
        return '�';
    case 203:
        return '�';
    case 204:
        return '�';
    case 205:
        return '�';
    case 206:
        return '�';
    case 207:
        return '�';
    case 208:
        return '�';
    case 209:
        return '�';
    case 210:
        return '�';
    case 211:
        return '�';
    case 212:
        return '�';
    case 213:
        return '�';
    case 214:
        return '�';
    case 215:
        return '�';
    case 216:
        return '�';
    case 217:
        return '�';
    case 218:
        return '�';
    case 219:
        return '�';
    case 220:
        return '�';
    case 221:
        return '�';
    case 222:
        return '�';
    case 223:
        return '�';
    case 224:
        return '�';
    case 225:
        return '�';
    case 226:
        return '�';
    case 227:
        return '�';
    case 228:
        return '�';
    case 229:
        return '�';
    case 230:
        return '�';
    case 231:
        return '�';
    case 232:
        return '�';
    case 233:
        return '�';
    case 234:
        return '�';
    case 235:
        return '�';
    case 236:
        return '�';
    case 237:
        return '�';
    case 238:
        return '�';
    case 239:
        return '�';
    case 240:
        return '�';
    case 241:
        return '�';
    case 242:
        return '�';
    case 243:
        return '�';
    case 244:
        return '�';
    case 245:
        return '�';
    case 246:
        return '�';
    case 247:
        return '�';
    case 248:
        return '�';
    case 249:
        return '�';
    case 250:
        return '�';
    case 251:
        return '�';
    case 252:
        return '�';
    case 253:
        return '�';
    case 254:
        return '�';
    case 255:
        return '�';
    }
    return -1;
}

/* Convert hexadecimal to int */
int hex2int(char *pChars)
{
    int Hi;
    int Lo;
    int Result;

    Hi = pChars[0];
    if ('0' <= Hi && Hi <= '9') {
        Hi -= '0';
    }
    else if ('a' <= Hi && Hi <= 'f') {
        Hi -= ('a' - 10);
    }
    else if ('A' <= Hi && Hi <= 'F') {
        Hi -= ('A' - 10);
    }
    Lo = pChars[1];
    if ('0' <= Lo && Lo <= '9') {
        Lo -= '0';
    }
    else if ('a' <= Lo && Lo <= 'f') {
        Lo -= ('a' - 10);
    }
    else if ('A' <= Lo && Lo <= 'F') {
        Lo -= ('A' - 10);
    }
    Result = Lo + (16 * Hi);

    return (Result);
}
