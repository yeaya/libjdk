#include <sun/nio/cs/ext/IBM918$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM918.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$String* IBM918$Holder::b2cTable = nullptr;
$chars* IBM918$Holder::b2c = nullptr;
$chars* IBM918$Holder::c2b = nullptr;
$chars* IBM918$Holder::c2bIndex = nullptr;

void IBM918$Holder::init$() {
}

void IBM918$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM918$Holder::b2cTable, $cstr({0xfea7, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xfea9, 0xfb88, 0xfeab, 0xfead, 0xfb8c, 0xfeaf, 0xfb8a, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xfeb1, 0xfeb3, 0xfeb5, 0xfeb7, 0xfeb9, 0xfebb, 0xfebd, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xfebf, 0xfec3, 0xfec7, 0xfec9, 0xfeca, 0xfecb, 0xfecc, 0xfecd, 0xfece, 0xfecf, 0xfed0, 0xfed1, 0xfed3, 0xfed5, 0xfed7, 0xfb8e, 0xfedb, '|', 0xfb92, 0xfb94, 0xfedd, 0xfedf, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xfee0, 0xfee1, 0xfee3, 0xfb9e, 0xfee5, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xfee7, 0xfe85, 0xfeed, 0xfba6, 0xfba8, 0xfba9, '\\', 0xfbaa, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xfe80, 0xfe89, 0xfe8a, 0xfe8b, 0xfbfc, 0xfbfd, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xfbfe, 0xfbb0, 0xfbae, 0xfe7c, 0xfe7d, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x060c, 0x061b, 0x061f, 0xfe81, 0xfe8d, 0xfe8e, 0xf8fb, 0xfe8f, '[', '.', '<', '(', '+', '!', '&', 0xfe91, 0xfb56, 0xfb58, 0xfe93, 0xfe95, 0xfe97, 0xfb66, 0xfb68, 0xfe99, ']', '$', '*', ')', ';', '^', '-', '/', 0xfe9b, 0xfe9d, 0xfe9f, 0xfb7a, 0xfb7c, 0xfea1, 0xfea3, 0xfea5, '`', ',', '%', '_', '>', '?', 0x06f0, 0x06f1, 0x06f2, 0x06f3, 0x06f4, 0x06f5, 0x06f6, 0x06f7, 0x06f8, 0x06f9, ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM918$Holder::b2c, IBM918$Holder::b2cTable->toCharArray());
	$assignStatic(IBM918$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM918$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM918$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM918$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM918$Holder::c2b, IBM918$Holder::c2bIndex);
	}
}

IBM918$Holder::IBM918$Holder() {
}

$Class* IBM918$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM918$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM918$Holder", "sun.nio.cs.ext.IBM918", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM918$Holder",
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
		"sun.nio.cs.ext.IBM918"
	};
	$loadClass(IBM918$Holder, name, initialize, &classInfo$$, IBM918$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM918$Holder);
	});
	return class$;
}

$Class* IBM918$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun