#include <sun/nio/cs/ext/IBM922.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM922$Holder.h>
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
using $IBM922$Holder = ::sun::nio::cs::ext::IBM922$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM922_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM922::*)()>(&IBM922::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM922_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM922$Holder", "sun.nio.cs.ext.IBM922", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM922_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM922",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM922_MethodInfo_,
	nullptr,
	nullptr,
	_IBM922_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM922$Holder"
};

$Object* allocate$IBM922($Class* clazz) {
	return $of($alloc(IBM922));
}

int32_t IBM922::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM922::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM922::toString() {
	 return this->$Charset::toString();
}

$Object* IBM922::clone() {
	 return this->$Charset::clone();
}

void IBM922::finalize() {
	this->$Charset::finalize();
}

void IBM922::init$() {
	$Charset::init$("x-IBM922"_s, $($ExtendedCharsets::aliasesFor("x-IBM922"_s)));
}

$String* IBM922::historicalName() {
	return "Cp922"_s;
}

bool IBM922::contains($Charset* cs) {
	return ($instanceOf(IBM922, cs));
}

$CharsetDecoder* IBM922::newDecoder() {
	$init($IBM922$Holder);
	return $new($SingleByte$Decoder, this, $IBM922$Holder::b2c, false, false);
}

$CharsetEncoder* IBM922::newEncoder() {
	$init($IBM922$Holder);
	return $new($SingleByte$Encoder, this, $IBM922$Holder::c2b, $IBM922$Holder::c2bIndex, false);
}

IBM922::IBM922() {
}

$Class* IBM922::load$($String* name, bool initialize) {
	$loadClass(IBM922, name, initialize, &_IBM922_ClassInfo_, allocate$IBM922);
	return class$;
}

$Class* IBM922::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun