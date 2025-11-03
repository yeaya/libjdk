#include <sun/nio/cs/ext/IBM964.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM964$Decoder.h>
#include <sun/nio/cs/ext/IBM964$Encoder.h>
#include <sun/nio/cs/ext/SimpleEUCEncoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM964$Decoder = ::sun::nio::cs::ext::IBM964$Decoder;
using $IBM964$Encoder = ::sun::nio::cs::ext::IBM964$Encoder;
using $SimpleEUCEncoder = ::sun::nio::cs::ext::SimpleEUCEncoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM964_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM964::*)()>(&IBM964::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM964_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM964$Encoder", "sun.nio.cs.ext.IBM964", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.IBM964$Decoder", "sun.nio.cs.ext.IBM964", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _IBM964_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM964",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM964_MethodInfo_,
	nullptr,
	nullptr,
	_IBM964_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM964$Encoder,sun.nio.cs.ext.IBM964$Decoder"
};

$Object* allocate$IBM964($Class* clazz) {
	return $of($alloc(IBM964));
}

int32_t IBM964::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM964::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM964::toString() {
	 return this->$Charset::toString();
}

$Object* IBM964::clone() {
	 return this->$Charset::clone();
}

void IBM964::finalize() {
	this->$Charset::finalize();
}

void IBM964::init$() {
	$Charset::init$("x-IBM964"_s, $($ExtendedCharsets::aliasesFor("x-IBM964"_s)));
}

$String* IBM964::historicalName() {
	return "Cp964"_s;
}

bool IBM964::contains($Charset* cs) {
	return ($instanceOf(IBM964, cs));
}

$CharsetDecoder* IBM964::newDecoder() {
	return $new($IBM964$Decoder, this);
}

$CharsetEncoder* IBM964::newEncoder() {
	return $new($IBM964$Encoder, this);
}

IBM964::IBM964() {
}

$Class* IBM964::load$($String* name, bool initialize) {
	$loadClass(IBM964, name, initialize, &_IBM964_ClassInfo_, allocate$IBM964);
	return class$;
}

$Class* IBM964::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun