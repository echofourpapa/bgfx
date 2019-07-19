static const uint8_t fs_font_basic_glsl[804] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _texColor.......
	0x03, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // ...varying highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, //  vec4 v_color0;.
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // varying highp ve
	0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c4 v_texcoord0;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, // uniform lowp sam
	0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, 0x65, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // plerCube s_texCo
	0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, // lor;.void main (
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // ).{.  lowp vec4
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_1;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, // ar_1 = textureCu
	0x62, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, // be (s_texColor,
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, // v_texcoord0.xyz)
	0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, // ;.  highp int tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_2;.  tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // _2 = int(((v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, // coord0.w * 4.0)
	0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, // + 0.5));.  lowp
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, // float tmpvar_3;.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, //   if ((tmpvar_2
	0x3c, 0x20, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // < 1)) {.    tmpv
	0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, // ar_3 = tmpvar_1.
	0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, // z;.  } else {.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, //   lowp float tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, // var_4;.    if ((
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3c, 0x20, 0x32, 0x29, 0x29, 0x20, 0x7b, // tmpvar_2 < 2)) {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, // .      tmpvar_4
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, // = tmpvar_1.y;.
	0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, //   } else {.
	0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, //  lowp float tmpv
	0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // ar_5;.      if (
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3c, 0x20, 0x33, 0x29, 0x29, 0x20, // (tmpvar_2 < 3))
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // {.        tmpvar
	0x5f, 0x35, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x3b, // _5 = tmpvar_1.x;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, // .      } else {.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, //         tmpvar_5
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x3b, 0x0a, 0x20, //  = tmpvar_1.w;.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, //      };.      tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // pvar_4 = tmpvar_
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, // 5;.    };.    tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // pvar_3 = tmpvar_
	0x34, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, // 4;.  };.  lowp v
	0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, // ec4 tmpvar_6;.
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, // tmpvar_6.xyz = v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, // _color0.xyz;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, // mpvar_6.w = (v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // olor0.w * tmpvar
	0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // _3);.  gl_FragCo
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, // lor = tmpvar_6;.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t fs_font_basic_spv[1375] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, // _texColor......8
	0x05, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xd4, // .....#..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, // ................
	0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, // .......GLSL.std.
	0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 450.............
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, // ...............m
	0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x86, // ain....x...{....
	0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, // ................
	0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x22, // ...main........"
	0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, // ...s_texColorSam
	0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x25, 0x00, 0x00, 0x00, 0x73, // pler.......%...s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // _texColorTexture
	0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x78, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // .......x...v_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x76, // or0........{...v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x86, // _texcoord0......
	0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // ...bgfx_FragData
	0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, // 0..G..."..."....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, // ...G..."...!....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, // ...G...%..."....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, // ...G...%...!....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, // ...G...x........
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, // ...G...{........
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x86, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, // ...G............
	0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, // ...........!....
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, // ................
	0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, // ....... ........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, // ................
	0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, // ................
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, // ...............
	0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, // ...!...........;
	0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, // ...!...".......
	0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, // ...$...........;
	0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, // ...$...%........
	0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, // ...(... .......+
	0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1b, // ...(...)........
	0x00, 0x03, 0x00, 0x31, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, // ...1.......+....
	0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x07, // ...O......@+....
	0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x14, 0x00, 0x02, 0x00, 0x56, // ...Q......?....V
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x02, // ...+...(........
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x03, // ...+...(...b....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, // ... ...w........
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x01, // ...;...w...x....
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x01, // ...;...w...{....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x85, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x85, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x03, // ...;............
	0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, // ...6............
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, // ...............=
	0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x3d, // .......#..."...=
	0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x3d, // .......&...%...=
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x3d, // .......y...x...=
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x4f, // .......|...{...O
	0x00, 0x08, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x7c, // ...........|...|
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x56, // ...............V
	0x00, 0x05, 0x00, 0x31, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x23, // ...1.......&...#
	0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0xd1, // ...W............
	0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xa7, // .......Q........
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, // ...|............
	0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x81, // ...........O....
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x00, 0x00, 0x6e, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xa9, // ...n...(........
	0x00, 0x00, 0x00, 0xb1, 0x00, 0x05, 0x00, 0x56, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0xaa, // .......V........
	0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xae, // ...)...Q........
	0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x05, 0x00, 0x56, // ...............V
	0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0xb1, 0x00, 0x05, 0x00, 0x56, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xaa, // .......V........
	0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb6, // ...b...Q........
	0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, // ...........Q....
	0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xa9, // ................
	0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xb6, // ................
	0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xba, // ................
	0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xa9, // ................
	0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0xae, // ................
	0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbf, // .......Q........
	0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, // ...y............
	0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, // ...........y....
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x79, // ...Q...........y
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc4, // .......Q........
	0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, // ...y.......P....
	0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc4, // ................
	0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x86, 0x00, 0x00, 0x00, 0xc5, // .......>........
	0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,       // .......8.......
};
static const uint8_t fs_font_basic_dx9[460] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xa8, // _texColor0......
	0x01, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, // ......... .CTAB.
	0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, // ...S............
	0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, // .......L...0....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, // .......<.......s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, // _texColor.......
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, // ...........ps_3_
	0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, // 0.Microsoft (R)
	0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, // HLSL Shader Comp
	0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, // iler 10.1..Q....
	0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, // ......@...?.....
	0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, // ..?Q............
	0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0xc0, 0x1f, 0x00, 0x00, 0x02, 0x0a, // .........@......
	0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, // ................
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x04, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, 0xa0, 0x00, // ................
	0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x58, // .U.............X
	0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, 0xa0, 0x00, // .........U......
	0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, // ................
	0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, // .U.X............
	0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, // ................
	0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, // .....U..........
	0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, // .......X........
	0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xaa, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x01, // ...........B....
	0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x01, 0x80, 0x01, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, // ................
	0x08, 0x08, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xff, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, // ................
	0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                         // ............
};
static const uint8_t fs_font_basic_dx11[623] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x48, // _texColor0.....H
	0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xdb, 0x69, 0x11, 0xe0, 0xc0, 0xf9, 0x23, 0x5b, 0x4d, // ...DXBC.i....#[M
	0x65, 0x8f, 0xa1, 0x99, 0x34, 0xff, 0x76, 0x01, 0x00, 0x00, 0x00, 0x48, 0x02, 0x00, 0x00, 0x03, // e...4.v....H....
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, // ...,...........I
	0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, // SGNl...........P
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, // ...............b
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, // .......SV_POSITI
	0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, // ON.COLOR.TEXCOOR
	0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, // D..OSGN,........
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ... ............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, // ...........SV_TA
	0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x6c, 0x01, 0x00, 0x00, 0x40, // RGET...SHDRl...@
	0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, // ...[...Z....`...
	0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, // ...X0...p......U
	0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, // U..b...........b
	0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, // ...........e....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x69, //  ......h.......i
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x45, // ...............E
	0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, // ...........F....
	0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, // ...F~.......`...
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...6....0 ......
	0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, // ...*.......6....
	0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, // 0 ..............
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, // ...6....0 ......
	0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, // ...........6....
	0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, // 0 .........:....
	0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, // ...2...........:
	0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x01, // ........@.....@.
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, // @.....?.........
	0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x07, 0x12, // ...........6....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x30, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0a, // ........0 ......
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, 0x00, // .......8.... ...
	0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x01, // ...........:....
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...6...r ......F
	0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,       // .......>.......
};
static const uint8_t fs_font_basic_mtl[767] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, // _texColor.......
	0x02, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, // ...#include <met
	0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, // al_stdlib>.#incl
	0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, // ude <simd/simd.h
	0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, // >..using namespa
	0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ce metal;..struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, // t xlatMtlMain_ou
	0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, // t.{.    float4 b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, // gfx_FragData0 [[
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, // color(0)]];.};..
	0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // struct xlatMtlMa
	0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // in_in.{.    floa
	0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, // t4 v_color0 [[us
	0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // er(locn0)]];.
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, //  float4 v_texcoo
	0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, // rd0 [[user(locn1
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, // )]];.};..fragmen
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, // t xlatMtlMain_ou
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, // t xlatMtlMain(xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, // atMtlMain_in in
	0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, // [[stage_in]], te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x63, 0x75, 0x62, 0x65, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, // xturecube<float>
	0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, //  s_texColor [[te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, // xture(0)]], samp
	0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, // ler s_texColorSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, // mpler [[sampler(
	0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, // 0)]]).{.    xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, // MtlMain_out out
	0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // = {};.    float4
	0x20, 0x5f, 0x32, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, //  _211 = s_texCol
	0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // or.sample(s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, // olorSampler, in.
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, // v_texcoord0.xyz)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x31, 0x37, 0x30, 0x20, 0x3d, // ;.    int _170 =
	0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, //  int((in.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, // ord0.w * 4.0) +
	0x30, 0x2e, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, // 0.5);.    out.bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x66, // fx_FragData0 = f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // loat4(in.v_color
	0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // 0.xyz, in.v_colo
	0x72, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x28, 0x28, 0x5f, 0x31, 0x37, 0x30, 0x20, 0x3c, 0x20, // r0.w * ((_170 <
	0x31, 0x29, 0x20, 0x3f, 0x20, 0x5f, 0x32, 0x31, 0x31, 0x2e, 0x7a, 0x20, 0x3a, 0x20, 0x28, 0x28, // 1) ? _211.z : ((
	0x5f, 0x31, 0x37, 0x30, 0x20, 0x3c, 0x20, 0x32, 0x29, 0x20, 0x3f, 0x20, 0x5f, 0x32, 0x31, 0x31, // _170 < 2) ? _211
	0x2e, 0x79, 0x20, 0x3a, 0x20, 0x28, 0x28, 0x5f, 0x31, 0x37, 0x30, 0x20, 0x3c, 0x20, 0x33, 0x29, // .y : ((_170 < 3)
	0x20, 0x3f, 0x20, 0x5f, 0x32, 0x31, 0x31, 0x2e, 0x78, 0x20, 0x3a, 0x20, 0x5f, 0x32, 0x31, 0x31, //  ? _211.x : _211
	0x2e, 0x77, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, // .w))));.    retu
	0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,       // rn out;.}......
};
extern const uint8_t* fs_font_basic_pssl;
extern const uint32_t fs_font_basic_pssl_size;