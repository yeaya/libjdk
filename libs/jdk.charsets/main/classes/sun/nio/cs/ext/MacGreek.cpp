#include <sun/nio/cs/ext/MacGreek.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacGreek$Holder.h>
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
using $MacGreek$Holder = ::sun::nio::cs::ext::MacGreek$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacGreek_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacGreek::*)()>(&MacGreek::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacGreek_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacGreek$Holder", "sun.nio.cs.ext.MacGreek", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacGreek_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacGreek",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacGreek_MethodInfo_,
	nullptr,
	nullptr,
	_MacGreek_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacGreek$Holder"
};

$Object* allocate$MacGreek($Class* clazz) {
	return $of($alloc(MacGreek));
}

int32_t MacGreek::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacGreek::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacGreek::toString() {
	 return this->$Charset::toString();
}

$Object* MacGreek::clone() {
	 return this->$Charset::clone();
}

void MacGreek::finalize() {
	this->$Charset::finalize();
}

void MacGreek::init$() {
	$Charset::init$("x-MacGreek"_s, $($ExtendedCharsets::aliasesFor("x-MacGreek"_s)));
}

$String* MacGreek::historicalName() {
	return "MacGreek"_s;
}

bool MacGreek::contains($Charset* cs) {
	return ($instanceOf(MacGreek, cs));
}

$CharsetDecoder* MacGreek::newDecoder() {
	$init($MacGreek$Holder);
	return $new($SingleByte$Decoder, this, $MacGreek$Holder::b2c, false, false);
}

$CharsetEncoder* MacGreek::newEncoder() {
	$init($MacGreek$Holder);
	return $new($SingleByte$Encoder, this, $MacGreek$Holder::c2b, $MacGreek$Holder::c2bIndex, false);
}

MacGreek::MacGreek() {
}

$Class* MacGreek::load$($String* name, bool initialize) {
	$loadClass(MacGreek, name, initialize, &_MacGreek_ClassInfo_, allocate$MacGreek);
	return class$;
}

$Class* MacGreek::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun