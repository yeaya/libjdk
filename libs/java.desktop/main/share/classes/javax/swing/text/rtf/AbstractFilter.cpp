#include <javax/swing/text/rtf/AbstractFilter.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$chars* AbstractFilter::latin1TranslationTable = nullptr;
$booleans* AbstractFilter::noSpecialsTable = nullptr;
$booleans* AbstractFilter::allSpecialsTable = nullptr;

void AbstractFilter::readFromStream($InputStream* in) {
	$nc(in)->transferTo(this);
}

void AbstractFilter::readFromReader($Reader* in) {
	$var($chars, buf, nullptr);
	int32_t count = 0;
	$assign(buf, $new($chars, 2048));
	while (true) {
		count = $nc(in)->read(buf);
		if (count < 0) {
			break;
		}
		for (int32_t i = 0; i < count; ++i) {
			this->write(buf->get(i));
		}
	}
}

void AbstractFilter::init$() {
	$OutputStream::init$();
	$set(this, translationTable, AbstractFilter::latin1TranslationTable);
	$set(this, specialsTable, AbstractFilter::noSpecialsTable);
}

void AbstractFilter::write(int32_t b) {
	if (b < 0) {
		b += 256;
	}
	if ($nc(this->specialsTable)->get(b)) {
		writeSpecial(b);
	} else {
		char16_t ch = $nc(this->translationTable)->get(b);
		if (ch != (char16_t)0) {
			write(ch);
		}
	}
}

void AbstractFilter::write($bytes* buf, int32_t off, int32_t len) {
	$useLocalObjectStack();
	$var($StringBuilder, accumulator, nullptr);
	while (len > 0) {
		int16_t b = (int16_t)$nc(buf)->get(off);
		if (b < 0) {
			b += 256;
		}
		if ($nc(this->specialsTable)->get(b)) {
			if (accumulator != nullptr) {
				write($(accumulator->toString()));
				$assign(accumulator, nullptr);
			}
			writeSpecial(b);
		} else {
			char16_t ch = $nc(this->translationTable)->get(b);
			if (ch != (char16_t)0) {
				if (accumulator == nullptr) {
					$assign(accumulator, $new($StringBuilder));
				}
				$nc(accumulator)->append(ch);
			}
		}
		--len;
		++off;
	}
	if (accumulator != nullptr) {
		write($(accumulator->toString()));
	}
}

void AbstractFilter::write($String* s) {
	int32_t index = 0;
	int32_t length = 0;
	length = $nc(s)->length();
	for (index = 0; index < length; ++index) {
		write(s->charAt(index));
	}
}

void AbstractFilter::clinit$($Class* clazz) {
	{
		int32_t i = 0;
		$assignStatic(AbstractFilter::noSpecialsTable, $new($booleans, 256));
		for (i = 0; i < 256; ++i) {
			AbstractFilter::noSpecialsTable->set(i, false);
		}
		$assignStatic(AbstractFilter::allSpecialsTable, $new($booleans, 256));
		for (i = 0; i < 256; ++i) {
			AbstractFilter::allSpecialsTable->set(i, true);
		}
		$assignStatic(AbstractFilter::latin1TranslationTable, $new($chars, 256));
		for (i = 0; i < 256; ++i) {
			AbstractFilter::latin1TranslationTable->set(i, (char16_t)i);
		}
	}
}

AbstractFilter::AbstractFilter() {
}

$Class* AbstractFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"translationTable", "[C", nullptr, $PROTECTED, $field(AbstractFilter, translationTable)},
		{"specialsTable", "[Z", nullptr, $PROTECTED, $field(AbstractFilter, specialsTable)},
		{"latin1TranslationTable", "[C", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, latin1TranslationTable)},
		{"noSpecialsTable", "[Z", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, noSpecialsTable)},
		{"allSpecialsTable", "[Z", nullptr, $STATIC | $FINAL, $staticField(AbstractFilter, allSpecialsTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractFilter, init$, void)},
		{"readFromReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $virtualMethod(AbstractFilter, readFromReader, void, $Reader*), "java.io.IOException"},
		{"readFromStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $virtualMethod(AbstractFilter, readFromStream, void, $InputStream*), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(AbstractFilter, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(AbstractFilter, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AbstractFilter, write, void, $String*), "java.io.IOException"},
		{"write", "(C)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractFilter, write, void, char16_t), "java.io.IOException"},
		{"writeSpecial", "(I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractFilter, writeSpecial, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.text.rtf.AbstractFilter",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractFilter, name, initialize, &classInfo$$, AbstractFilter::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractFilter));
	});
	return class$;
}

$Class* AbstractFilter::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax