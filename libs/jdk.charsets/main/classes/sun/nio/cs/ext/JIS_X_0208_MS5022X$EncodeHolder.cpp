#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS5022X = ::sun::nio::cs::ext::JIS_X_0208_MS5022X;
using $JIS_X_0208_MS5022X$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS5022X$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _JIS_X_0208_MS5022X$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS5022X$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS5022X$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0208_MS5022X$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0208_MS5022X$EncodeHolder::*)()>(&JIS_X_0208_MS5022X$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0208_MS5022X$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JIS_X_0208_MS5022X$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS5022X", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_MS5022X$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.JIS_X_0208_MS5022X$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208_MS5022X$EncodeHolder_FieldInfo_,
	_JIS_X_0208_MS5022X$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_MS5022X$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JIS_X_0208_MS5022X"
};

$Object* allocate$JIS_X_0208_MS5022X$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208_MS5022X$EncodeHolder));
}

$chars* JIS_X_0208_MS5022X$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_MS5022X$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_MS5022X$EncodeHolder::init$() {
}

void clinit$JIS_X_0208_MS5022X$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208_MS5022X$EncodeHolder::c2b, $new($chars, 25856));
	$assignStatic(JIS_X_0208_MS5022X$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u215d\uff0d\u2142\u2225\u2123\uff61\u2156\uff62\u2157\uff63\u2122\uff64\u2126\uff65\u2572\uff66\u2521\uff67\u2523\uff68\u2525\uff69\u2527\uff6a\u2529\uff6b\u2563\uff6c\u2565\uff6d\u2567\uff6e\u2543\uff6f\u213c\uff70\u2522\uff71\u2524\uff72\u2526\uff73\u2528\uff74\u252a\uff75\u252b\uff76\u252d\uff77\u252f\uff78\u2531\uff79\u2533\uff7a\u2535\uff7b\u2537\uff7c\u2539\uff7d\u253b\uff7e\u253d\uff7f\u253f\uff80\u2541\uff81\u2544\uff82\u2546\uff83\u2548\uff84\u254a\uff85\u254b\uff86\u254c\uff87\u254d\uff88\u254e\uff89\u254f\uff8a\u2552\uff8b\u2555\uff8c\u2558\uff8d\u255b\uff8e\u255e\uff8f\u255f\uff90\u2560\uff91\u2561\uff92\u2562\uff93\u2564\uff94\u2566\uff95\u2568\uff96\u2569\uff97\u256a\uff98\u256b\uff99\u256c\uff9a\u256d\uff9b\u256f\uff9c\u2573\uff9d\u212b\uff9e\u212c\uff9f\u2171\uffe0\u2172\uffe1\u224c\uffe2"_s);
		$init($JIS_X_0208_MS5022X$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_MS5022X$DecodeHolder::b2cStr, $JIS_X_0208_MS5022X$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_MS5022X$EncodeHolder::c2b, JIS_X_0208_MS5022X$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_MS5022X$EncodeHolder::JIS_X_0208_MS5022X$EncodeHolder() {
}

$Class* JIS_X_0208_MS5022X$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_MS5022X$EncodeHolder, name, initialize, &_JIS_X_0208_MS5022X$EncodeHolder_ClassInfo_, clinit$JIS_X_0208_MS5022X$EncodeHolder, allocate$JIS_X_0208_MS5022X$EncodeHolder);
	return class$;
}

$Class* JIS_X_0208_MS5022X$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun