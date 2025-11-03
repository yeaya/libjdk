#include <sun/nio/cs/ext/IBM1143.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1143$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM1143$Holder = ::sun::nio::cs::ext::IBM1143$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1143_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1143::*)()>(&IBM1143::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1143_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1143$Holder", "sun.nio.cs.ext.IBM1143", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1143_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1143",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1143_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1143_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1143$Holder"
};

$Object* allocate$IBM1143($Class* clazz) {
	return $of($alloc(IBM1143));
}

int32_t IBM1143::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1143::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1143::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1143::clone() {
	 return this->$Charset::clone();
}

void IBM1143::finalize() {
	this->$Charset::finalize();
}

void IBM1143::init$() {
	$Charset::init$("IBM01143"_s, $($ExtendedCharsets::aliasesFor("IBM01143"_s)));
}

$String* IBM1143::historicalName() {
	return "Cp1143"_s;
}

bool IBM1143::contains($Charset* cs) {
	return ($instanceOf(IBM1143, cs));
}

$CharsetDecoder* IBM1143::newDecoder() {
	$init($IBM1143$Holder);
	return $new($SingleByte$Decoder, this, $IBM1143$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1143::newEncoder() {
	$init($IBM1143$Holder);
	return $new($SingleByte$Encoder, this, $IBM1143$Holder::c2b, $IBM1143$Holder::c2bIndex, false);
}

IBM1143::IBM1143() {
}

$Class* IBM1143::load$($String* name, bool initialize) {
	$loadClass(IBM1143, name, initialize, &_IBM1143_ClassInfo_, allocate$IBM1143);
	return class$;
}

$Class* IBM1143::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun