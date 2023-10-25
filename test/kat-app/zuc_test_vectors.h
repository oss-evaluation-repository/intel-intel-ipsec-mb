/*****************************************************************************
 Copyright (c) 2009-2023, Intel Corporation

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

     * Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of Intel Corporation nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

#ifndef __ZUC_TEST_VECTORS_H__
#define __ZUC_TEST_VECTORS_H__

#define MAX_BUFFER_LENGTH_IN_BITS  5670 /* biggest test is EIA test 5 */
#define MAX_BUFFER_LENGTH_IN_BYTES ((MAX_BUFFER_LENGTH_IN_BITS) + 7) / 8
#define NUM_ZUC_256_EEA3_TESTS     10

typedef struct test256EEA3_vectors_t {
        uint8_t CK[32];
        uint8_t IV[25];
        uint32_t length_in_bits;
        uint32_t iv_length;
        uint8_t plaintext[MAX_BUFFER_LENGTH_IN_BYTES];
        uint8_t ciphertext[MAX_BUFFER_LENGTH_IN_BYTES];
} test256EEA_vectors_t;

/* ZUC-256 */
const struct test256EEA3_vectors_t test256EEA3_vectors[] = {
        /* TestSet 1 */
        { /* Key */
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* IV */
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Message length */
          640,
          /* IV length */
          25,
          /* Plaintext */
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0x58, 0xD0, 0x3A, 0xD6, 0x2E, 0x03, 0x2C, 0xE2, 0xDA, 0xFC, 0x68, 0x3A, 0x39, 0xBD,
            0xCB, 0x03, 0x52, 0xA2, 0xBC, 0x67, 0xF1, 0xB7, 0xDE, 0x74, 0x16, 0x3C, 0xE3, 0xA1,
            0x01, 0xEF, 0x55, 0x58, 0x96, 0x39, 0xD7, 0x5B, 0x95, 0xFA, 0x68, 0x1B, 0x7F, 0x09,
            0x0D, 0xF7, 0x56, 0x39, 0x1C, 0xCC, 0x90, 0x3B, 0x76, 0x12, 0x74, 0x4D, 0x54, 0x4C,
            0x17, 0xBC, 0x3F, 0xAD, 0x8B, 0x16, 0x3B, 0x08, 0x21, 0x78, 0x7C, 0x0B, 0x97, 0x77,
            0x5B, 0xB8, 0x49, 0x43, 0xC6, 0xBB, 0xE8, 0xAD, 0x8A, 0xFD } },
        /* TestSet 2 */
        { /* Key */
          { 0x8f, 0x8e, 0xf9, 0xd8, 0xfb, 0x0a, 0xce, 0x2b, 0x23, 0x19, 0x48,
            0x42, 0xcb, 0x5c, 0x6d, 0x98, 0x1e, 0x71, 0x68, 0x74, 0xe1, 0xdf,
            0xeb, 0xe0, 0xf2, 0x46, 0x02, 0x71, 0xbb, 0x69, 0x0d, 0x9e },
          /* IV */
          { 0x2c, 0xe8, 0x87, 0x0f, 0x8c, 0x7f, 0x47, 0x2a, 0x02, 0x2d, 0x24, 0xcd,
            0x23, 0x3f, 0x4d, 0x0a, 0x40, 0x0d, 0x12, 0xdd, 0xc4, 0x16, 0x26 },
          /* Message length */
          1536,
          /* IV length */
          23,
          /* Plaintext */
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0xc1, 0xce, 0x46, 0xd2, 0x4e, 0x78, 0x6f, 0x97, 0xcf, 0xc0, 0xa5, 0x3c, 0xec, 0x50,
            0x6e, 0x17, 0xe0, 0x8c, 0x7e, 0x33, 0x84, 0x98, 0x2b, 0xc1, 0x68, 0x97, 0x24, 0x83,
            0x03, 0x7c, 0x0d, 0xc5, 0x19, 0xa1, 0xe8, 0xb1, 0xb7, 0x53, 0x4f, 0x3b, 0x8a, 0xa3,
            0xce, 0x9b, 0x3d, 0xd0, 0x1a, 0xf7, 0x7d, 0xae, 0x4c, 0x6b, 0xe4, 0xe3, 0x12, 0x70,
            0x63, 0xc9, 0x4c, 0xcf, 0x1f, 0xf7, 0x18, 0xdf, 0xf1, 0x7d, 0x96, 0xe4, 0x60, 0xa8,
            0x3b, 0xf5, 0x71, 0x7d, 0x2a, 0x87, 0x1d, 0x82, 0xed, 0x92, 0xc5, 0xe7, 0x6e, 0xd9,
            0x3c, 0x01, 0x0d, 0x87, 0x13, 0x3b, 0x1a, 0x92, 0xa2, 0x83, 0x1a, 0x5b, 0x9a, 0xfb,
            0x81, 0x1d, 0xdb, 0xbd, 0x82, 0x01, 0x3b, 0x32, 0x0e, 0x2c, 0x67, 0x3c, 0x14, 0x13,
            0x9d, 0x58, 0xf1, 0x88, 0x9d, 0xe5, 0xd6, 0xe3, 0x48, 0xaa, 0x43, 0xc2, 0x08, 0xa6,
            0x64, 0xa8, 0xad, 0x71, 0x26, 0x7e, 0xe7, 0xed, 0x0c, 0x58, 0xd3, 0x27, 0x42, 0x5e,
            0x10, 0xb0, 0x03, 0x62, 0x18, 0x30, 0xde, 0xdb, 0x45, 0xcd, 0x78, 0xdd, 0xee, 0x4f,
            0xa1, 0x45, 0xa6, 0xbf, 0xc1, 0x37, 0x3e, 0x47, 0x5c, 0x1b, 0xb6, 0x8b, 0x63, 0x87,
            0x49, 0xc4, 0x1b, 0x9e, 0xea, 0x01, 0x62, 0x2a, 0x44, 0x65, 0x17, 0x0f, 0xee, 0xcc,
            0x7f, 0xe6, 0xab, 0x05, 0x46, 0x25, 0x7d, 0xdc, 0x40, 0x1e } },
        /* TestSet 3 */
        { /* Key */
          { 0x92, 0xf9, 0x27, 0xe8, 0xab, 0x48, 0x46, 0xdb, 0x2f, 0xa3, 0x61,
            0x36, 0x7e, 0x89, 0xe1, 0x17, 0xc9, 0x99, 0x57, 0x63, 0xe0, 0xe4,
            0x4c, 0xce, 0x20, 0x03, 0x8a, 0x9c, 0x9a, 0x44, 0xca, 0x64 },
          /* IV */
          { 0x7d, 0x51, 0xfb, 0x42, 0xf8, 0x7e, 0x62, 0xfa, 0x60, 0x25, 0xb9, 0x2b,
            0x4e, 0xd6, 0x1c, 0x2e, 0xcc, 0x6c, 0x65, 0x18, 0x1e, 0x9d, 0x04 },
          /* Message length */
          768,
          /* IV length */
          23,
          /* Plaintext */
          {
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },
          /* Ciphertext */
          { 0xe4, 0x14, 0xf9, 0x26, 0x45, 0xc6, 0x2e, 0x12, 0xb0, 0xe1, 0x33, 0xf6, 0xa7, 0x96,
            0x22, 0xfb, 0x0f, 0xe0, 0x07, 0x5c, 0x6e, 0xbe, 0x10, 0x1b, 0x37, 0xe4, 0xf7, 0x1c,
            0x94, 0xcf, 0xf1, 0x73, 0x02, 0x64, 0x61, 0x40, 0xb4, 0xf1, 0xfb, 0xcf, 0x8c, 0xc6,
            0xa2, 0xda, 0xd7, 0x3f, 0xb4, 0xcc, 0xa8, 0x7b, 0x13, 0xaa, 0xd2, 0x6e, 0x2a, 0x1b,
            0x0a, 0x07, 0xef, 0x88, 0x41, 0xfb, 0x6c, 0x10, 0x3f, 0x41, 0x60, 0xb3, 0x4c, 0x7d,
            0x00, 0x9c, 0x72, 0x2f, 0x4a, 0xa2, 0xc1, 0x0c, 0xf4, 0x6f, 0xbf, 0xed, 0xec, 0xaf,
            0xeb, 0xbc, 0xc8, 0x2a, 0x54, 0x60, 0x48, 0x7d, 0xfe, 0x20, 0x38, 0x6a } },
        /* TestSet 4 */
        { /* Key */
          { 0xa7, 0x72, 0xf5, 0xfe, 0x9d, 0x81, 0xd1, 0xcf, 0x22, 0x8e, 0x45,
            0x53, 0x67, 0x75, 0xac, 0xc9, 0x04, 0x19, 0x57, 0x55, 0x0f, 0x6c,
            0x39, 0xf9, 0xc5, 0x1b, 0x1e, 0x9e, 0xbb, 0x22, 0xa2, 0xf5 },
          /* IV */
          { 0xce, 0x51, 0x11, 0x83, 0x9b, 0x64, 0x4d, 0x20, 0x51, 0x92, 0x71, 0x3b,
            0x43, 0x47, 0xf9, 0x38, 0x79, 0x0f, 0xd2, 0x59, 0xbc, 0x35, 0xd3 },
          /* Message length */
          384,
          /* IV length */
          23,
          /* Plaintext */
          {
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },
          /* Ciphertext */
          { 0x89, 0x63, 0x69, 0xca, 0x77, 0xd3, 0x05, 0xf7, 0xa3, 0xcb, 0xf6, 0xba,
            0xb3, 0x8c, 0x14, 0x4f, 0xc3, 0x73, 0xf4, 0xf0, 0xf5, 0x0c, 0xf1, 0xad,
            0x0f, 0x41, 0x65, 0x48, 0x40, 0x47, 0x5e, 0xef, 0xad, 0xea, 0x1c, 0x3c,
            0x15, 0xa0, 0xd2, 0x72, 0x25, 0x14, 0x1d, 0x6f, 0xa0, 0x0f, 0xe8, 0x9a } },
        /* TestSet 5 */
        { /* Key */
          { 0xf8, 0xa0, 0x45, 0x4f, 0x6d, 0xea, 0x74, 0x6e, 0x4c, 0xd1, 0x6e,
            0xb0, 0xc3, 0xa2, 0x1f, 0x57, 0xeb, 0x6f, 0x35, 0x2d, 0x6a, 0x02,
            0x5b, 0x35, 0x32, 0xba, 0x47, 0x3f, 0x1f, 0x0e, 0xdd, 0xc9 },
          /* IV */
          { 0x07, 0x90, 0xeb, 0x7d, 0x09, 0x6d, 0xc1, 0xf1, 0x86, 0x47, 0xea, 0x57,
            0xe4, 0xb8, 0x92, 0xb1, 0x4e, 0x3b, 0x2d, 0x62, 0xaa, 0x53, 0x6f },
          /* Message length */
          384,
          /* IV length */
          23,
          /* Plaintext */
          {
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },
          /* Ciphertext */
          { 0xc6, 0x02, 0x3c, 0x58, 0x53, 0xc9, 0xae, 0xba, 0x0a, 0x47, 0x10, 0xdc,
            0x85, 0x76, 0x13, 0x82, 0x08, 0x66, 0xbc, 0x3e, 0x9c, 0x2d, 0xb2, 0x42,
            0x20, 0x3a, 0x0a, 0x0c, 0x49, 0x1d, 0xe9, 0x44, 0x73, 0x87, 0xe5, 0x60,
            0x9d, 0x98, 0xff, 0xf1, 0x33, 0xc3, 0xd0, 0x3d, 0x49, 0xfc, 0x77, 0x07 } },
        /* TestSet 6 */
        { /* Key */
          { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF },
          /* IV */
          { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F },
          /* Message length */
          640,
          /* IV length */
          25,
          /* Plaintext*/
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0x33, 0x56, 0xcb, 0xae, 0xd1, 0xa1, 0xc1, 0x8b, 0x6b, 0xaa, 0x4f, 0xfe, 0x34, 0x3f,
            0x77, 0x7c, 0x9e, 0x15, 0x12, 0x8f, 0x25, 0x1a, 0xb6, 0x5b, 0x94, 0x9f, 0x7b, 0x26,
            0xef, 0x71, 0x57, 0xf2, 0x96, 0xdd, 0x2f, 0xa9, 0xdf, 0x95, 0xe3, 0xee, 0x7a, 0x5b,
            0xe0, 0x2e, 0xc3, 0x2b, 0xa5, 0x85, 0x50, 0x5a, 0xf3, 0x16, 0xc2, 0xf9, 0xde, 0xd2,
            0x7c, 0xdb, 0xd9, 0x35, 0xe4, 0x41, 0xce, 0x11, 0x15, 0xfd, 0x0a, 0x80, 0xbb, 0x7a,
            0xef, 0x67, 0x68, 0x98, 0x94, 0x16, 0xb8, 0xfa, 0xc8, 0xc2 } },
        /* TestSet 7 */
        { /* Key */
          { 0x67, 0xc6, 0x69, 0x73, 0x51, 0xff, 0x4a, 0xec, 0x29, 0xcd, 0xba,
            0xab, 0xf2, 0xfb, 0xe3, 0x46, 0x7c, 0xc2, 0x54, 0xf8, 0x1b, 0xe8,
            0xe7, 0x8d, 0x76, 0x5a, 0x2e, 0x63, 0x33, 0x9f, 0xc9, 0x9a },
          /* IV */
          { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F },
          /* Message length */
          640,
          /* IV length */
          25,
          /* Plaintext*/
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0xB7, 0xA0, 0x40, 0x5E, 0xD0, 0xE5, 0xE4, 0x47, 0xBA, 0x13, 0xF2, 0xB5, 0xA9, 0xED,
            0x8A, 0x25, 0xE4, 0x3E, 0x8E, 0x62, 0xD7, 0xB3, 0xE6, 0x46, 0xC5, 0x71, 0xA1, 0xC6,
            0xCD, 0x76, 0xEA, 0x59, 0x3A, 0x49, 0x3D, 0xE2, 0xF9, 0x52, 0x91, 0x00, 0xAF, 0x20,
            0x69, 0x60, 0xCC, 0xE8, 0x4B, 0x38, 0x0B, 0xB8, 0x42, 0xCD, 0x1B, 0x12, 0xAC, 0xD9,
            0x89, 0x50, 0x87, 0x46, 0x85, 0xD1, 0x57, 0x66, 0xFA, 0x65, 0x85, 0x98, 0xFF, 0xB7,
            0x89, 0x3F, 0x34, 0xFF, 0x9F, 0xF1, 0x3D, 0x80, 0xE8, 0x54 } },
        /* TestSet 8 */
        { /* Key */
          { 0xC2, 0x54, 0xF8, 0x1B, 0xE8, 0xE7, 0x8D, 0x76, 0x5A, 0x2E, 0x63,
            0x33, 0x9F, 0xC9, 0x9A, 0x66, 0x32, 0x0D, 0xB7, 0x31, 0x58, 0xA3,
            0x5A, 0x25, 0x5D, 0x05, 0x17, 0x58, 0xE9, 0x5E, 0xD4, 0xAB },
          /* IV */
          { 0x67, 0xC6, 0x69, 0x73, 0x51, 0xFF, 0x4A, 0xEC, 0x29, 0xCD, 0xBA, 0xAB, 0xF2,
            0xFB, 0xE3, 0x46, 0x7C, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F },
          /* Message length */
          640,
          /* IV length */
          25,
          /* Plaintext*/
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0x8D, 0x59, 0x00, 0x3C, 0xB9, 0x8F, 0xE2, 0x79, 0xC7, 0xE8, 0x85, 0x35, 0xEF, 0xE5,
            0xB5, 0x51, 0xDE, 0xA5, 0xEC, 0xB1, 0xCA, 0xDC, 0x55, 0x5A, 0x3C, 0xD3, 0xA9, 0xB4,
            0x32, 0x22, 0x34, 0xD9, 0x42, 0xE2, 0x99, 0x4A, 0x9B, 0x87, 0xFD, 0x46, 0x73, 0x54,
            0xDC, 0x68, 0xEA, 0xE8, 0xD4, 0xBA, 0xDC, 0x1C, 0xB7, 0x44, 0x13, 0xA0, 0xA0, 0xA2,
            0x18, 0x86, 0x3F, 0x35, 0x92, 0xD1, 0x1C, 0x8C, 0xAE, 0xFF, 0xA3, 0x1B, 0x4E, 0xE8,
            0x6F, 0xC6, 0x49, 0x37, 0xF9, 0x8A, 0xC6, 0x90, 0x7C, 0x36 } },
        /* TestSet 9 */
        { /* Key */
          { 0x8D, 0x76, 0x5A, 0x2E, 0x63, 0x33, 0x9F, 0xC9, 0x9A, 0x66, 0x32,
            0x0D, 0xB7, 0x31, 0x58, 0xA3, 0x5A, 0x25, 0x5D, 0x05, 0x17, 0x58,
            0xE9, 0x5E, 0xD4, 0xAB, 0xB2, 0xCD, 0xC6, 0x9B, 0xB4, 0x54 },
          /* IV */
          { 0x67, 0xC6, 0x69, 0x73, 0x51, 0xFF, 0x4A, 0xEC, 0x29, 0xCD, 0xBA, 0xAB, 0xF2,
            0xFB, 0xE3, 0x46, 0x7C, 0x30, 0x25, 0x13, 0x38, 0x06, 0x3E, 0x23, 0x27 },
          /* Message length */
          640,
          /* IV length */
          25,
          /* Plaintext*/
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0xD8, 0x2E, 0x40, 0x78, 0x2C, 0x03, 0xA7, 0x1A, 0x90, 0xA5, 0x05, 0xC5, 0x8E, 0x61,
            0x26, 0x8B, 0xE2, 0x5F, 0x61, 0xF6, 0x1F, 0xD4, 0x6D, 0x04, 0x0D, 0x9E, 0x48, 0x78,
            0x38, 0xF3, 0x2F, 0x97, 0x46, 0x00, 0x4E, 0xAC, 0xCC, 0x93, 0x09, 0x43, 0x92, 0x1A,
            0x17, 0x42, 0x38, 0xF8, 0x8C, 0x9B, 0x7E, 0x90, 0xC2, 0x9F, 0x4A, 0x16, 0x0C, 0x2A,
            0x43, 0x3B, 0xBB, 0xD9, 0x50, 0xEE, 0x85, 0xD9, 0x7D, 0x1E, 0x3A, 0xB5, 0x57, 0xFB,
            0x56, 0xD8, 0xB4, 0x34, 0x5C, 0x5C, 0x0B, 0x48, 0x67, 0x37 } },
        /* TestSet 10 */
        { /* Key */
          { 0x67, 0xc6, 0x69, 0x73, 0x51, 0xff, 0x4a, 0xec, 0x29, 0xcd, 0xba,
            0xab, 0xf2, 0xfb, 0xe3, 0x46, 0x7c, 0xc2, 0x54, 0xf8, 0x1b, 0xe8,
            0xe7, 0x8d, 0x76, 0x5a, 0x2e, 0x63, 0x33, 0x9f, 0xc9, 0x9a },
          /* IV */
          { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF },
          /* Message length */
          640,
          /* IV length */
          23,
          /* Plaintext*/
          { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
          /* Ciphertext */
          { 0xB7, 0xA0, 0x40, 0x5E, 0xD0, 0xE5, 0xE4, 0x47, 0xBA, 0x13, 0xF2, 0xB5, 0xA9, 0xED,
            0x8A, 0x25, 0xE4, 0x3E, 0x8E, 0x62, 0xD7, 0xB3, 0xE6, 0x46, 0xC5, 0x71, 0xA1, 0xC6,
            0xCD, 0x76, 0xEA, 0x59, 0x3A, 0x49, 0x3D, 0xE2, 0xF9, 0x52, 0x91, 0x00, 0xAF, 0x20,
            0x69, 0x60, 0xCC, 0xE8, 0x4B, 0x38, 0x0B, 0xB8, 0x42, 0xCD, 0x1B, 0x12, 0xAC, 0xD9,
            0x89, 0x50, 0x87, 0x46, 0x85, 0xD1, 0x57, 0x66, 0xFA, 0x65, 0x85, 0x98, 0xFF, 0xB7,
            0x89, 0x3F, 0x34, 0xFF, 0x9F, 0xF1, 0x3D, 0x80, 0xE8, 0x54 } },
};
#endif
