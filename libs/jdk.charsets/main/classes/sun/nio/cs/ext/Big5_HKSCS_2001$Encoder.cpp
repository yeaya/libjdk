#include <sun/nio/cs/ext/Big5_HKSCS_2001$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
#include <sun/nio/cs/ext/Big5.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001.h>
#include <sun/nio/cs/ext/HKSCS2001Mapping.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $Big5 = ::sun::nio::cs::ext::Big5;
using $Big5_HKSCS_2001 = ::sun::nio::cs::ext::Big5_HKSCS_2001;
using $HKSCS2001Mapping = ::sun::nio::cs::ext::HKSCS2001Mapping;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _Big5_HKSCS_2001$Encoder_FieldInfo_[] = {
	{"big5", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC, $staticField(Big5_HKSCS_2001$Encoder, big5)},
	{"c2bBmp", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_HKSCS_2001$Encoder, c2bBmp)},
	{"c2bSupp", "[[C", nullptr, $STATIC | $FINAL, $staticField(Big5_HKSCS_2001$Encoder, c2bSupp)},
	{}
};

$MethodInfo _Big5_HKSCS_2001$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(Big5_HKSCS_2001$Encoder::*)($Charset*)>(&Big5_HKSCS_2001$Encoder::init$))},
	{}
};

$InnerClassInfo _Big5_HKSCS_2001$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.Big5_HKSCS_2001$Encoder", "sun.nio.cs.ext.Big5_HKSCS_2001", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Big5_HKSCS_2001$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.Big5_HKSCS_2001$Encoder",
	"sun.nio.cs.HKSCS$Encoder",
	nullptr,
	_Big5_HKSCS_2001$Encoder_FieldInfo_,
	_Big5_HKSCS_2001$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_HKSCS_2001$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.Big5_HKSCS_2001"
};

$Object* allocate$Big5_HKSCS_2001$Encoder($Class* clazz) {
	return $of($alloc(Big5_HKSCS_2001$Encoder));
}

$DoubleByte$Encoder* Big5_HKSCS_2001$Encoder::big5 = nullptr;
$charArray2* Big5_HKSCS_2001$Encoder::c2bBmp = nullptr;
$charArray2* Big5_HKSCS_2001$Encoder::c2bSupp = nullptr;

void Big5_HKSCS_2001$Encoder::init$($Charset* cs) {
	$HKSCS$Encoder::init$(cs, Big5_HKSCS_2001$Encoder::big5, Big5_HKSCS_2001$Encoder::c2bBmp, Big5_HKSCS_2001$Encoder::c2bSupp);
}

void clinit$Big5_HKSCS_2001$Encoder($Class* class$) {
	$assignStatic(Big5_HKSCS_2001$Encoder::big5, $cast($DoubleByte$Encoder, $$new($Big5)->newEncoder()));
	$assignStatic(Big5_HKSCS_2001$Encoder::c2bBmp, $new($charArray2, 256));
	$assignStatic(Big5_HKSCS_2001$Encoder::c2bSupp, $new($charArray2, 256));
	{
		$init($HKSCS2001Mapping);
		$HKSCS$Encoder::initc2b(Big5_HKSCS_2001$Encoder::c2bBmp, $HKSCS2001Mapping::b2cBmpStr, $HKSCS2001Mapping::pua);
		$HKSCS$Encoder::initc2b(Big5_HKSCS_2001$Encoder::c2bSupp, $HKSCS2001Mapping::b2cSuppStr, nullptr);
	}
}

Big5_HKSCS_2001$Encoder::Big5_HKSCS_2001$Encoder() {
}

$Class* Big5_HKSCS_2001$Encoder::load$($String* name, bool initialize) {
	$loadClass(Big5_HKSCS_2001$Encoder, name, initialize, &_Big5_HKSCS_2001$Encoder_ClassInfo_, clinit$Big5_HKSCS_2001$Encoder, allocate$Big5_HKSCS_2001$Encoder);
	return class$;
}

$Class* Big5_HKSCS_2001$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun