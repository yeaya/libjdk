#include <javax/swing/text/html/parser/NPrintWriter.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

void NPrintWriter::init$(int32_t numberOfLines) {
	$PrintWriter::init$($System::out);
	this->numLines = 5;
	this->numPrinted = 0;
	this->numLines = numberOfLines;
}

void NPrintWriter::println($chars* array) {
	if (this->numPrinted >= this->numLines) {
		return;
	}
	$var($chars, partialArray, nullptr);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		if (array->get(i) == u'\n') {
			++this->numPrinted;
		}
		if (this->numPrinted == this->numLines) {
			$System::arraycopy(array, 0, partialArray, 0, i);
		}
	}
	if (partialArray != nullptr) {
		$PrintWriter::print(partialArray);
	}
	if (this->numPrinted == this->numLines) {
		return;
	}
	$PrintWriter::println(array);
	++this->numPrinted;
}

NPrintWriter::NPrintWriter() {
}

$Class* NPrintWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"numLines", "I", nullptr, $PRIVATE, $field(NPrintWriter, numLines)},
		{"numPrinted", "I", nullptr, $PRIVATE, $field(NPrintWriter, numPrinted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(NPrintWriter, init$, void, int32_t)},
		{"println", "([C)V", nullptr, $PUBLIC, $virtualMethod(NPrintWriter, println, void, $chars*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.parser.NPrintWriter",
		"java.io.PrintWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NPrintWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NPrintWriter));
	});
	return class$;
}

$Class* NPrintWriter::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax