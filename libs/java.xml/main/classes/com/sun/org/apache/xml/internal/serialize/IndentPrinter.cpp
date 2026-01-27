#include <com/sun/org/apache/xml/internal/serialize/IndentPrinter.h>

#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Printer = ::com::sun::org::apache::xml::internal::serialize::Printer;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _IndentPrinter_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _IndentPrinter_FieldInfo_[] = {
	{"_line", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(IndentPrinter, _line)},
	{"_text", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(IndentPrinter, _text)},
	{"_spaces", "I", nullptr, $PRIVATE, $field(IndentPrinter, _spaces)},
	{"_thisIndent", "I", nullptr, $PRIVATE, $field(IndentPrinter, _thisIndent)},
	{"_nextIndent", "I", nullptr, $PRIVATE, $field(IndentPrinter, _nextIndent)},
	{}
};

$MethodInfo _IndentPrinter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(IndentPrinter, init$, void, $Writer*, $OutputFormat*)},
	{"breakLine", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, breakLine, void)},
	{"breakLine", "(Z)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, breakLine, void, bool)},
	{"enterDTD", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, enterDTD, void)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, flush, void)},
	{"flushLine", "(Z)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, flushLine, void, bool)},
	{"getNextIndent", "()I", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, getNextIndent, int32_t)},
	{"indent", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, indent, void)},
	{"leaveDTD", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, leaveDTD, $String*)},
	{"printSpace", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, printSpace, void)},
	{"printText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, printText, void, $String*)},
	{"printText", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, printText, void, $StringBuffer*)},
	{"printText", "(C)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, printText, void, char16_t)},
	{"printText", "([CII)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, printText, void, $chars*, int32_t, int32_t)},
	{"setNextIndent", "(I)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, setNextIndent, void, int32_t)},
	{"setThisIndent", "(I)V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, setThisIndent, void, int32_t)},
	{"unindent", "()V", nullptr, $PUBLIC, $virtualMethod(IndentPrinter, unindent, void)},
	{}
};

$ClassInfo _IndentPrinter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.IndentPrinter",
	"com.sun.org.apache.xml.internal.serialize.Printer",
	nullptr,
	_IndentPrinter_FieldInfo_,
	_IndentPrinter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IndentPrinter_Annotations_
};

$Object* allocate$IndentPrinter($Class* clazz) {
	return $of($alloc(IndentPrinter));
}

void IndentPrinter::init$($Writer* writer, $OutputFormat* format) {
	$Printer::init$(writer, format);
	$set(this, _line, $new($StringBuffer, 80));
	$set(this, _text, $new($StringBuffer, 20));
	this->_spaces = 0;
	this->_thisIndent = (this->_nextIndent = 0);
}

void IndentPrinter::enterDTD() {
	if (this->_dtdWriter == nullptr) {
		$nc(this->_line)->append(this->_text);
		$set(this, _text, $new($StringBuffer, 20));
		flushLine(false);
		$set(this, _dtdWriter, $new($StringWriter));
		$set(this, _docWriter, this->_writer);
		$set(this, _writer, this->_dtdWriter);
	}
}

$String* IndentPrinter::leaveDTD() {
	if ($equals(this->_writer, this->_dtdWriter)) {
		$nc(this->_line)->append(this->_text);
		$set(this, _text, $new($StringBuffer, 20));
		flushLine(false);
		$set(this, _writer, this->_docWriter);
		return $nc(this->_dtdWriter)->toString();
	} else {
		return nullptr;
	}
}

void IndentPrinter::printText($String* text) {
	$nc(this->_text)->append(text);
}

void IndentPrinter::printText($StringBuffer* text) {
	$nc(this->_text)->append($($nc(text)->toString()));
}

void IndentPrinter::printText(char16_t ch) {
	$nc(this->_text)->append(ch);
}

void IndentPrinter::printText($chars* chars, int32_t start, int32_t length) {
	$nc(this->_text)->append(chars, start, length);
}

void IndentPrinter::printSpace() {
	if ($nc(this->_text)->length() > 0) {
		bool var$0 = $nc(this->_format)->getLineWidth() > 0;
		if (var$0) {
			int32_t var$2 = this->_thisIndent + $nc(this->_line)->length() + this->_spaces;
			int32_t var$1 = var$2 + $nc(this->_text)->length();
			var$0 = var$1 > $nc(this->_format)->getLineWidth();
		}
		if (var$0) {
			flushLine(false);
			try {
				$nc(this->_writer)->write($($nc(this->_format)->getLineSeparator()));
			} catch ($IOException& except) {
				if (this->_exception == nullptr) {
					$set(this, _exception, except);
				}
			}
		}
		while (this->_spaces > 0) {
			$nc(this->_line)->append(u' ');
			--this->_spaces;
		}
		$nc(this->_line)->append(this->_text);
		$set(this, _text, $new($StringBuffer, 20));
	}
	++this->_spaces;
}

void IndentPrinter::breakLine() {
	breakLine(false);
}

void IndentPrinter::breakLine(bool preserveSpace) {
	if ($nc(this->_text)->length() > 0) {
		while (this->_spaces > 0) {
			$nc(this->_line)->append(u' ');
			--this->_spaces;
		}
		$nc(this->_line)->append(this->_text);
		$set(this, _text, $new($StringBuffer, 20));
	}
	flushLine(preserveSpace);
	try {
		$nc(this->_writer)->write($($nc(this->_format)->getLineSeparator()));
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
	}
}

void IndentPrinter::flushLine(bool preserveSpace) {
	int32_t indent = 0;
	if ($nc(this->_line)->length() > 0) {
		try {
			if ($nc(this->_format)->getIndenting() && !preserveSpace) {
				indent = this->_thisIndent;
				bool var$0 = (2 * indent) > $nc(this->_format)->getLineWidth();
				if (var$0 && $nc(this->_format)->getLineWidth() > 0) {
					indent = $nc(this->_format)->getLineWidth() / 2;
				}
				while (indent > 0) {
					$nc(this->_writer)->write((int32_t)u' ');
					--indent;
				}
			}
			this->_thisIndent = this->_nextIndent;
			this->_spaces = 0;
			$nc(this->_writer)->write($($nc(this->_line)->toString()));
			$set(this, _line, $new($StringBuffer, 40));
		} catch ($IOException& except) {
			if (this->_exception == nullptr) {
				$set(this, _exception, except);
			}
		}
	}
}

void IndentPrinter::flush() {
	bool var$0 = $nc(this->_line)->length() > 0;
	if (var$0 || $nc(this->_text)->length() > 0) {
		breakLine();
	}
	try {
		$nc(this->_writer)->flush();
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
	}
}

void IndentPrinter::indent() {
	this->_nextIndent += $nc(this->_format)->getIndent();
}

void IndentPrinter::unindent() {
	this->_nextIndent -= $nc(this->_format)->getIndent();
	if (this->_nextIndent < 0) {
		this->_nextIndent = 0;
	}
	int32_t var$0 = $nc(this->_line)->length() + this->_spaces;
	if ((var$0 + $nc(this->_text)->length()) == 0) {
		this->_thisIndent = this->_nextIndent;
	}
}

int32_t IndentPrinter::getNextIndent() {
	return this->_nextIndent;
}

void IndentPrinter::setNextIndent(int32_t indent) {
	this->_nextIndent = indent;
}

void IndentPrinter::setThisIndent(int32_t indent) {
	this->_thisIndent = indent;
}

IndentPrinter::IndentPrinter() {
}

$Class* IndentPrinter::load$($String* name, bool initialize) {
	$loadClass(IndentPrinter, name, initialize, &_IndentPrinter_ClassInfo_, allocate$IndentPrinter);
	return class$;
}

$Class* IndentPrinter::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com