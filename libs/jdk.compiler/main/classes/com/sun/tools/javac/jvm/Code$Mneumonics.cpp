#include <com/sun/tools/javac/jvm/Code$Mneumonics.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$StringArray* Code$Mneumonics::mnem = nullptr;

void Code$Mneumonics::init$() {
}

void Code$Mneumonics::clinit$($Class* clazz) {
	$assignStatic(Code$Mneumonics::mnem, $new($StringArray, 203));
	{
		Code$Mneumonics::mnem->set(0, "nop"_s);
		Code$Mneumonics::mnem->set(1, "aconst_null"_s);
		Code$Mneumonics::mnem->set(2, "iconst_m1"_s);
		Code$Mneumonics::mnem->set(3, "iconst_0"_s);
		Code$Mneumonics::mnem->set(4, "iconst_1"_s);
		Code$Mneumonics::mnem->set(5, "iconst_2"_s);
		Code$Mneumonics::mnem->set(6, "iconst_3"_s);
		Code$Mneumonics::mnem->set(7, "iconst_4"_s);
		Code$Mneumonics::mnem->set(8, "iconst_5"_s);
		Code$Mneumonics::mnem->set(9, "lconst_0"_s);
		Code$Mneumonics::mnem->set(10, "lconst_1"_s);
		Code$Mneumonics::mnem->set(11, "fconst_0"_s);
		Code$Mneumonics::mnem->set(12, "fconst_1"_s);
		Code$Mneumonics::mnem->set(13, "fconst_2"_s);
		Code$Mneumonics::mnem->set(14, "dconst_0"_s);
		Code$Mneumonics::mnem->set(15, "dconst_1"_s);
		Code$Mneumonics::mnem->set(16, "bipush"_s);
		Code$Mneumonics::mnem->set(17, "sipush"_s);
		Code$Mneumonics::mnem->set(18, "ldc1"_s);
		Code$Mneumonics::mnem->set(19, "ldc2"_s);
		Code$Mneumonics::mnem->set(20, "ldc2w"_s);
		Code$Mneumonics::mnem->set(21, "iload"_s);
		Code$Mneumonics::mnem->set(22, "lload"_s);
		Code$Mneumonics::mnem->set(23, "fload"_s);
		Code$Mneumonics::mnem->set(24, "dload"_s);
		Code$Mneumonics::mnem->set(25, "aload"_s);
		Code$Mneumonics::mnem->set(26, "iload_0"_s);
		Code$Mneumonics::mnem->set(30, "lload_0"_s);
		Code$Mneumonics::mnem->set(34, "fload_0"_s);
		Code$Mneumonics::mnem->set(38, "dload_0"_s);
		Code$Mneumonics::mnem->set(42, "aload_0"_s);
		Code$Mneumonics::mnem->set(27, "iload_1"_s);
		Code$Mneumonics::mnem->set(31, "lload_1"_s);
		Code$Mneumonics::mnem->set(35, "fload_1"_s);
		Code$Mneumonics::mnem->set(39, "dload_1"_s);
		Code$Mneumonics::mnem->set(43, "aload_1"_s);
		Code$Mneumonics::mnem->set(28, "iload_2"_s);
		Code$Mneumonics::mnem->set(32, "lload_2"_s);
		Code$Mneumonics::mnem->set(36, "fload_2"_s);
		Code$Mneumonics::mnem->set(40, "dload_2"_s);
		Code$Mneumonics::mnem->set(44, "aload_2"_s);
		Code$Mneumonics::mnem->set(29, "iload_3"_s);
		Code$Mneumonics::mnem->set(33, "lload_3"_s);
		Code$Mneumonics::mnem->set(37, "fload_3"_s);
		Code$Mneumonics::mnem->set(41, "dload_3"_s);
		Code$Mneumonics::mnem->set(45, "aload_3"_s);
		Code$Mneumonics::mnem->set(46, "iaload"_s);
		Code$Mneumonics::mnem->set(47, "laload"_s);
		Code$Mneumonics::mnem->set(48, "faload"_s);
		Code$Mneumonics::mnem->set(49, "daload"_s);
		Code$Mneumonics::mnem->set(50, "aaload"_s);
		Code$Mneumonics::mnem->set(51, "baload"_s);
		Code$Mneumonics::mnem->set(52, "caload"_s);
		Code$Mneumonics::mnem->set(53, "saload"_s);
		Code$Mneumonics::mnem->set(54, "istore"_s);
		Code$Mneumonics::mnem->set(55, "lstore"_s);
		Code$Mneumonics::mnem->set(56, "fstore"_s);
		Code$Mneumonics::mnem->set(57, "dstore"_s);
		Code$Mneumonics::mnem->set(58, "astore"_s);
		Code$Mneumonics::mnem->set(59, "istore_0"_s);
		Code$Mneumonics::mnem->set(63, "lstore_0"_s);
		Code$Mneumonics::mnem->set(67, "fstore_0"_s);
		Code$Mneumonics::mnem->set(71, "dstore_0"_s);
		Code$Mneumonics::mnem->set(75, "astore_0"_s);
		Code$Mneumonics::mnem->set(60, "istore_1"_s);
		Code$Mneumonics::mnem->set(64, "lstore_1"_s);
		Code$Mneumonics::mnem->set(68, "fstore_1"_s);
		Code$Mneumonics::mnem->set(72, "dstore_1"_s);
		Code$Mneumonics::mnem->set(76, "astore_1"_s);
		Code$Mneumonics::mnem->set(61, "istore_2"_s);
		Code$Mneumonics::mnem->set(65, "lstore_2"_s);
		Code$Mneumonics::mnem->set(69, "fstore_2"_s);
		Code$Mneumonics::mnem->set(73, "dstore_2"_s);
		Code$Mneumonics::mnem->set(77, "astore_2"_s);
		Code$Mneumonics::mnem->set(62, "istore_3"_s);
		Code$Mneumonics::mnem->set(66, "lstore_3"_s);
		Code$Mneumonics::mnem->set(70, "fstore_3"_s);
		Code$Mneumonics::mnem->set(74, "dstore_3"_s);
		Code$Mneumonics::mnem->set(78, "astore_3"_s);
		Code$Mneumonics::mnem->set(79, "iastore"_s);
		Code$Mneumonics::mnem->set(80, "lastore"_s);
		Code$Mneumonics::mnem->set(81, "fastore"_s);
		Code$Mneumonics::mnem->set(82, "dastore"_s);
		Code$Mneumonics::mnem->set(83, "aastore"_s);
		Code$Mneumonics::mnem->set(84, "bastore"_s);
		Code$Mneumonics::mnem->set(85, "castore"_s);
		Code$Mneumonics::mnem->set(86, "sastore"_s);
		Code$Mneumonics::mnem->set(87, "pop"_s);
		Code$Mneumonics::mnem->set(88, "pop2"_s);
		Code$Mneumonics::mnem->set(89, "dup"_s);
		Code$Mneumonics::mnem->set(90, "dup_x1"_s);
		Code$Mneumonics::mnem->set(91, "dup_x2"_s);
		Code$Mneumonics::mnem->set(92, "dup2"_s);
		Code$Mneumonics::mnem->set(93, "dup2_x1"_s);
		Code$Mneumonics::mnem->set(94, "dup2_x2"_s);
		Code$Mneumonics::mnem->set(95, "swap"_s);
		Code$Mneumonics::mnem->set(96, "iadd"_s);
		Code$Mneumonics::mnem->set(97, "ladd"_s);
		Code$Mneumonics::mnem->set(98, "fadd"_s);
		Code$Mneumonics::mnem->set(99, "dadd"_s);
		Code$Mneumonics::mnem->set(100, "isub"_s);
		Code$Mneumonics::mnem->set(101, "lsub"_s);
		Code$Mneumonics::mnem->set(102, "fsub"_s);
		Code$Mneumonics::mnem->set(103, "dsub"_s);
		Code$Mneumonics::mnem->set(104, "imul"_s);
		Code$Mneumonics::mnem->set(105, "lmul"_s);
		Code$Mneumonics::mnem->set(106, "fmul"_s);
		Code$Mneumonics::mnem->set(107, "dmul"_s);
		Code$Mneumonics::mnem->set(108, "idiv"_s);
		Code$Mneumonics::mnem->set(109, "ldiv"_s);
		Code$Mneumonics::mnem->set(110, "fdiv"_s);
		Code$Mneumonics::mnem->set(111, "ddiv"_s);
		Code$Mneumonics::mnem->set(112, "imod"_s);
		Code$Mneumonics::mnem->set(113, "lmod"_s);
		Code$Mneumonics::mnem->set(114, "fmod"_s);
		Code$Mneumonics::mnem->set(115, "dmod"_s);
		Code$Mneumonics::mnem->set(116, "ineg"_s);
		Code$Mneumonics::mnem->set(117, "lneg"_s);
		Code$Mneumonics::mnem->set(118, "fneg"_s);
		Code$Mneumonics::mnem->set(119, "dneg"_s);
		Code$Mneumonics::mnem->set(120, "ishl"_s);
		Code$Mneumonics::mnem->set(121, "lshl"_s);
		Code$Mneumonics::mnem->set(122, "ishr"_s);
		Code$Mneumonics::mnem->set(123, "lshr"_s);
		Code$Mneumonics::mnem->set(124, "iushr"_s);
		Code$Mneumonics::mnem->set(125, "lushr"_s);
		Code$Mneumonics::mnem->set(126, "iand"_s);
		Code$Mneumonics::mnem->set(127, "land"_s);
		Code$Mneumonics::mnem->set(128, "ior"_s);
		Code$Mneumonics::mnem->set(129, "lor"_s);
		Code$Mneumonics::mnem->set(130, "ixor"_s);
		Code$Mneumonics::mnem->set(131, "lxor"_s);
		Code$Mneumonics::mnem->set(132, "iinc"_s);
		Code$Mneumonics::mnem->set(133, "i2l"_s);
		Code$Mneumonics::mnem->set(134, "i2f"_s);
		Code$Mneumonics::mnem->set(135, "i2d"_s);
		Code$Mneumonics::mnem->set(136, "l2i"_s);
		Code$Mneumonics::mnem->set(137, "l2f"_s);
		Code$Mneumonics::mnem->set(138, "l2d"_s);
		Code$Mneumonics::mnem->set(139, "f2i"_s);
		Code$Mneumonics::mnem->set(140, "f2l"_s);
		Code$Mneumonics::mnem->set(141, "f2d"_s);
		Code$Mneumonics::mnem->set(142, "d2i"_s);
		Code$Mneumonics::mnem->set(143, "d2l"_s);
		Code$Mneumonics::mnem->set(144, "d2f"_s);
		Code$Mneumonics::mnem->set(145, "int2byte"_s);
		Code$Mneumonics::mnem->set(146, "int2char"_s);
		Code$Mneumonics::mnem->set(147, "int2short"_s);
		Code$Mneumonics::mnem->set(148, "lcmp"_s);
		Code$Mneumonics::mnem->set(149, "fcmpl"_s);
		Code$Mneumonics::mnem->set(150, "fcmpg"_s);
		Code$Mneumonics::mnem->set(151, "dcmpl"_s);
		Code$Mneumonics::mnem->set(152, "dcmpg"_s);
		Code$Mneumonics::mnem->set(153, "ifeq"_s);
		Code$Mneumonics::mnem->set(154, "ifne"_s);
		Code$Mneumonics::mnem->set(155, "iflt"_s);
		Code$Mneumonics::mnem->set(156, "ifge"_s);
		Code$Mneumonics::mnem->set(157, "ifgt"_s);
		Code$Mneumonics::mnem->set(158, "ifle"_s);
		Code$Mneumonics::mnem->set(159, "if_icmpeq"_s);
		Code$Mneumonics::mnem->set(160, "if_icmpne"_s);
		Code$Mneumonics::mnem->set(161, "if_icmplt"_s);
		Code$Mneumonics::mnem->set(162, "if_icmpge"_s);
		Code$Mneumonics::mnem->set(163, "if_icmpgt"_s);
		Code$Mneumonics::mnem->set(164, "if_icmple"_s);
		Code$Mneumonics::mnem->set(165, "if_acmpeq"_s);
		Code$Mneumonics::mnem->set(166, "if_acmpne"_s);
		Code$Mneumonics::mnem->set(167, "goto_"_s);
		Code$Mneumonics::mnem->set(168, "jsr"_s);
		Code$Mneumonics::mnem->set(169, "ret"_s);
		Code$Mneumonics::mnem->set(170, "tableswitch"_s);
		Code$Mneumonics::mnem->set(171, "lookupswitch"_s);
		Code$Mneumonics::mnem->set(172, "ireturn"_s);
		Code$Mneumonics::mnem->set(173, "lreturn"_s);
		Code$Mneumonics::mnem->set(174, "freturn"_s);
		Code$Mneumonics::mnem->set(175, "dreturn"_s);
		Code$Mneumonics::mnem->set(176, "areturn"_s);
		Code$Mneumonics::mnem->set(177, "return_"_s);
		Code$Mneumonics::mnem->set(178, "getstatic"_s);
		Code$Mneumonics::mnem->set(179, "putstatic"_s);
		Code$Mneumonics::mnem->set(180, "getfield"_s);
		Code$Mneumonics::mnem->set(181, "putfield"_s);
		Code$Mneumonics::mnem->set(182, "invokevirtual"_s);
		Code$Mneumonics::mnem->set(183, "invokespecial"_s);
		Code$Mneumonics::mnem->set(184, "invokestatic"_s);
		Code$Mneumonics::mnem->set(185, "invokeinterface"_s);
		Code$Mneumonics::mnem->set(186, "invokedynamic"_s);
		Code$Mneumonics::mnem->set(187, "new_"_s);
		Code$Mneumonics::mnem->set(188, "newarray"_s);
		Code$Mneumonics::mnem->set(189, "anewarray"_s);
		Code$Mneumonics::mnem->set(190, "arraylength"_s);
		Code$Mneumonics::mnem->set(191, "athrow"_s);
		Code$Mneumonics::mnem->set(192, "checkcast"_s);
		Code$Mneumonics::mnem->set(193, "instanceof_"_s);
		Code$Mneumonics::mnem->set(194, "monitorenter"_s);
		Code$Mneumonics::mnem->set(195, "monitorexit"_s);
		Code$Mneumonics::mnem->set(196, "wide"_s);
		Code$Mneumonics::mnem->set(197, "multianewarray"_s);
		Code$Mneumonics::mnem->set(198, "if_acmp_null"_s);
		Code$Mneumonics::mnem->set(199, "if_acmp_nonnull"_s);
		Code$Mneumonics::mnem->set(200, "goto_w"_s);
		Code$Mneumonics::mnem->set(201, "jsr_w"_s);
		Code$Mneumonics::mnem->set(202, "breakpoint"_s);
	}
}

Code$Mneumonics::Code$Mneumonics() {
}

$Class* Code$Mneumonics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mnem", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Code$Mneumonics, mnem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Code$Mneumonics, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$Mneumonics", "com.sun.tools.javac.jvm.Code", "Mneumonics", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Code$Mneumonics",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$Mneumonics, name, initialize, &classInfo$$, Code$Mneumonics::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Code$Mneumonics);
	});
	return class$;
}

$Class* Code$Mneumonics::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com