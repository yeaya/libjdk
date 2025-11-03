#include <sun/nio/cs/ext/MacIceland.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacIceland$Holder.h>
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
using $MacIceland$Holder = ::sun::nio::cs::ext::MacIceland$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacIceland_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacIceland::*)()>(&MacIceland::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacIceland_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacIceland$Holder", "sun.nio.cs.ext.MacIceland", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacIceland_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacIceland",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacIceland_MethodInfo_,
	nullptr,
	nullptr,
	_MacIceland_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacIceland$Holder"
};

$Object* allocate$MacIceland($Class* clazz) {
	return $of($alloc(MacIceland));
}

int32_t MacIceland::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacIceland::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacIceland::toString() {
	 return this->$Charset::toString();
}

$Object* MacIceland::clone() {
	 return this->$Charset::clone();
}

void MacIceland::finalize() {
	this->$Charset::finalize();
}

void MacIceland::init$() {
	$Charset::init$("x-MacIceland"_s, $($ExtendedCharsets::aliasesFor("x-MacIceland"_s)));
}

$String* MacIceland::historicalName() {
	return "MacIceland"_s;
}

bool MacIceland::contains($Charset* cs) {
	return ($instanceOf(MacIceland, cs));
}

$CharsetDecoder* MacIceland::newDecoder() {
	$init($MacIceland$Holder);
	return $new($SingleByte$Decoder, this, $MacIceland$Holder::b2c, false, false);
}

$CharsetEncoder* MacIceland::newEncoder() {
	$init($MacIceland$Holder);
	return $new($SingleByte$Encoder, this, $MacIceland$Holder::c2b, $MacIceland$Holder::c2bIndex, false);
}

MacIceland::MacIceland() {
}

$Class* MacIceland::load$($String* name, bool initialize) {
	$loadClass(MacIceland, name, initialize, &_MacIceland_ClassInfo_, allocate$MacIceland);
	return class$;
}

$Class* MacIceland::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun