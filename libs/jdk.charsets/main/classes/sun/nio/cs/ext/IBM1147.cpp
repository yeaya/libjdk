#include <sun/nio/cs/ext/IBM1147.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1147$Holder.h>
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
using $IBM1147$Holder = ::sun::nio::cs::ext::IBM1147$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1147_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1147::*)()>(&IBM1147::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1147_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1147$Holder", "sun.nio.cs.ext.IBM1147", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1147_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1147",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1147_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1147_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1147$Holder"
};

$Object* allocate$IBM1147($Class* clazz) {
	return $of($alloc(IBM1147));
}

int32_t IBM1147::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1147::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1147::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1147::clone() {
	 return this->$Charset::clone();
}

void IBM1147::finalize() {
	this->$Charset::finalize();
}

void IBM1147::init$() {
	$Charset::init$("IBM01147"_s, $($ExtendedCharsets::aliasesFor("IBM01147"_s)));
}

$String* IBM1147::historicalName() {
	return "Cp1147"_s;
}

bool IBM1147::contains($Charset* cs) {
	return ($instanceOf(IBM1147, cs));
}

$CharsetDecoder* IBM1147::newDecoder() {
	$init($IBM1147$Holder);
	return $new($SingleByte$Decoder, this, $IBM1147$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1147::newEncoder() {
	$init($IBM1147$Holder);
	return $new($SingleByte$Encoder, this, $IBM1147$Holder::c2b, $IBM1147$Holder::c2bIndex, false);
}

IBM1147::IBM1147() {
}

$Class* IBM1147::load$($String* name, bool initialize) {
	$loadClass(IBM1147, name, initialize, &_IBM1147_ClassInfo_, allocate$IBM1147);
	return class$;
}

$Class* IBM1147::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun