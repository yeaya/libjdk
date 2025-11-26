#include <sun/nio/cs/ext/JIS_X_0208_MS932$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS932 = ::sun::nio::cs::ext::JIS_X_0208_MS932;
using $JIS_X_0208_MS932$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS932$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _JIS_X_0208_MS932$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS932$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS932$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0208_MS932$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0208_MS932$EncodeHolder::*)()>(&JIS_X_0208_MS932$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0208_MS932$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS932", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_MS932$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208_MS932$EncodeHolder_FieldInfo_,
	_JIS_X_0208_MS932$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_MS932$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JIS_X_0208_MS932"
};

$Object* allocate$JIS_X_0208_MS932$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208_MS932$EncodeHolder));
}

$chars* JIS_X_0208_MS932$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_MS932$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_MS932$EncodeHolder::init$() {
}

void clinit$JIS_X_0208_MS932$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208_MS932$EncodeHolder::c2b, $new($chars, 25344));
	$assignStatic(JIS_X_0208_MS932$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"\u224c\uffe2\u225d\u22a5\u2265\u221a\u2269\u222b\u2d70\u2252\u2d71\u2261\u2d77\u2220\u2d7a\u2235\u2d7b\u2229\u2d7c\u222a"_s);
		$var($String, c2bNR, u"\u2124\u00b8\u2126\u00b7\u2131\u00af\u2263\u00ab\u2264\u00bb\u2574\u3094\u264c\u00b5"_s);
		$init($JIS_X_0208_MS932$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_MS932$DecodeHolder::b2cStr, $JIS_X_0208_MS932$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_MS932$EncodeHolder::c2b, JIS_X_0208_MS932$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_MS932$EncodeHolder::JIS_X_0208_MS932$EncodeHolder() {
}

$Class* JIS_X_0208_MS932$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_MS932$EncodeHolder, name, initialize, &_JIS_X_0208_MS932$EncodeHolder_ClassInfo_, clinit$JIS_X_0208_MS932$EncodeHolder, allocate$JIS_X_0208_MS932$EncodeHolder);
	return class$;
}

$Class* JIS_X_0208_MS932$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun