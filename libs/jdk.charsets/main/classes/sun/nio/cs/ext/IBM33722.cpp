#include <sun/nio/cs/ext/IBM33722.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM33722$Decoder.h>
#include <sun/nio/cs/ext/IBM33722$Encoder.h>
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
using $IBM33722$Decoder = ::sun::nio::cs::ext::IBM33722$Decoder;
using $IBM33722$Encoder = ::sun::nio::cs::ext::IBM33722$Encoder;
using $SimpleEUCEncoder = ::sun::nio::cs::ext::SimpleEUCEncoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM33722_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM33722::*)()>(&IBM33722::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM33722_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM33722$Encoder", "sun.nio.cs.ext.IBM33722", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.IBM33722$Decoder", "sun.nio.cs.ext.IBM33722", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _IBM33722_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM33722",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM33722_MethodInfo_,
	nullptr,
	nullptr,
	_IBM33722_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM33722$Encoder,sun.nio.cs.ext.IBM33722$Decoder"
};

$Object* allocate$IBM33722($Class* clazz) {
	return $of($alloc(IBM33722));
}

int32_t IBM33722::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM33722::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM33722::toString() {
	 return this->$Charset::toString();
}

$Object* IBM33722::clone() {
	 return this->$Charset::clone();
}

void IBM33722::finalize() {
	this->$Charset::finalize();
}

void IBM33722::init$() {
	$Charset::init$("x-IBM33722"_s, $($ExtendedCharsets::aliasesFor("x-IBM33722"_s)));
}

$String* IBM33722::historicalName() {
	return "Cp33722"_s;
}

bool IBM33722::contains($Charset* cs) {
	return ($instanceOf(IBM33722, cs));
}

$CharsetDecoder* IBM33722::newDecoder() {
	return $new($IBM33722$Decoder, this);
}

$CharsetEncoder* IBM33722::newEncoder() {
	return $new($IBM33722$Encoder, this);
}

IBM33722::IBM33722() {
}

$Class* IBM33722::load$($String* name, bool initialize) {
	$loadClass(IBM33722, name, initialize, &_IBM33722_ClassInfo_, allocate$IBM33722);
	return class$;
}

$Class* IBM33722::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun