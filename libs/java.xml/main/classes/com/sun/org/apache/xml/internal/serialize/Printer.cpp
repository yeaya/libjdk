#include <com/sun/org/apache/xml/internal/serialize/Printer.h>

#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
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

$CompoundAttribute _Printer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Printer_FieldInfo_[] = {
	{"_format", "Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;", nullptr, $PROTECTED | $FINAL, $field(Printer, _format)},
	{"_writer", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(Printer, _writer)},
	{"_dtdWriter", "Ljava/io/StringWriter;", nullptr, $PROTECTED, $field(Printer, _dtdWriter)},
	{"_docWriter", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(Printer, _docWriter)},
	{"_exception", "Ljava/io/IOException;", nullptr, $PROTECTED, $field(Printer, _exception)},
	{"BufferSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Printer, BufferSize)},
	{"_buffer", "[C", nullptr, $PRIVATE | $FINAL, $field(Printer, _buffer)},
	{"_pos", "I", nullptr, $PRIVATE, $field(Printer, _pos)},
	{}
};

$MethodInfo _Printer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(Printer, init$, void, $Writer*, $OutputFormat*)},
	{"breakLine", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, breakLine, void), "java.io.IOException"},
	{"breakLine", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Printer, breakLine, void, bool), "java.io.IOException"},
	{"enterDTD", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, enterDTD, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, flush, void), "java.io.IOException"},
	{"flushLine", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Printer, flushLine, void, bool), "java.io.IOException"},
	{"getException", "()Ljava/io/IOException;", nullptr, $PUBLIC, $virtualMethod(Printer, getException, $IOException*)},
	{"getNextIndent", "()I", nullptr, $PUBLIC, $virtualMethod(Printer, getNextIndent, int32_t)},
	{"indent", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, indent, void)},
	{"leaveDTD", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Printer, leaveDTD, $String*), "java.io.IOException"},
	{"printSpace", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, printSpace, void), "java.io.IOException"},
	{"printText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Printer, printText, void, $String*), "java.io.IOException"},
	{"printText", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Printer, printText, void, $StringBuffer*), "java.io.IOException"},
	{"printText", "([CII)V", nullptr, $PUBLIC, $virtualMethod(Printer, printText, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"printText", "(C)V", nullptr, $PUBLIC, $virtualMethod(Printer, printText, void, char16_t), "java.io.IOException"},
	{"setNextIndent", "(I)V", nullptr, $PUBLIC, $virtualMethod(Printer, setNextIndent, void, int32_t)},
	{"setThisIndent", "(I)V", nullptr, $PUBLIC, $virtualMethod(Printer, setThisIndent, void, int32_t)},
	{"unindent", "()V", nullptr, $PUBLIC, $virtualMethod(Printer, unindent, void)},
	{}
};

$ClassInfo _Printer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.Printer",
	"java.lang.Object",
	nullptr,
	_Printer_FieldInfo_,
	_Printer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Printer_Annotations_
};

$Object* allocate$Printer($Class* clazz) {
	return $of($alloc(Printer));
}

void Printer::init$($Writer* writer, $OutputFormat* format) {
	$set(this, _buffer, $new($chars, Printer::BufferSize));
	this->_pos = 0;
	$set(this, _writer, writer);
	$set(this, _format, format);
	$set(this, _exception, nullptr);
	$set(this, _dtdWriter, nullptr);
	$set(this, _docWriter, nullptr);
	this->_pos = 0;
}

$IOException* Printer::getException() {
	return this->_exception;
}

void Printer::enterDTD() {
	if (this->_dtdWriter == nullptr) {
		flushLine(false);
		$set(this, _dtdWriter, $new($StringWriter));
		$set(this, _docWriter, this->_writer);
		$set(this, _writer, this->_dtdWriter);
	}
}

$String* Printer::leaveDTD() {
	if ($equals(this->_writer, this->_dtdWriter)) {
		flushLine(false);
		$set(this, _writer, this->_docWriter);
		return $nc(this->_dtdWriter)->toString();
	} else {
		return nullptr;
	}
}

void Printer::printText($String* text) {
	try {
		int32_t length = $nc(text)->length();
		for (int32_t i = 0; i < length; ++i) {
			if (this->_pos == Printer::BufferSize) {
				$nc(this->_writer)->write(this->_buffer);
				this->_pos = 0;
			}
			$nc(this->_buffer)->set(this->_pos, text->charAt(i));
			++this->_pos;
		}
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::printText($StringBuffer* text) {
	try {
		int32_t length = $nc(text)->length();
		for (int32_t i = 0; i < length; ++i) {
			if (this->_pos == Printer::BufferSize) {
				$nc(this->_writer)->write(this->_buffer);
				this->_pos = 0;
			}
			$nc(this->_buffer)->set(this->_pos, text->charAt(i));
			++this->_pos;
		}
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::printText($chars* chars, int32_t start, int32_t length) {
	try {
		while (length-- > 0) {
			if (this->_pos == Printer::BufferSize) {
				$nc(this->_writer)->write(this->_buffer);
				this->_pos = 0;
			}
			$nc(this->_buffer)->set(this->_pos, $nc(chars)->get(start));
			++start;
			++this->_pos;
		}
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::printText(char16_t ch) {
	try {
		if (this->_pos == Printer::BufferSize) {
			$nc(this->_writer)->write(this->_buffer);
			this->_pos = 0;
		}
		$nc(this->_buffer)->set(this->_pos, ch);
		++this->_pos;
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::printSpace() {
	try {
		if (this->_pos == Printer::BufferSize) {
			$nc(this->_writer)->write(this->_buffer);
			this->_pos = 0;
		}
		$nc(this->_buffer)->set(this->_pos, u' ');
		++this->_pos;
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::breakLine() {
	try {
		if (this->_pos == Printer::BufferSize) {
			$nc(this->_writer)->write(this->_buffer);
			this->_pos = 0;
		}
		$nc(this->_buffer)->set(this->_pos, u'\n');
		++this->_pos;
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
}

void Printer::breakLine(bool preserveSpace) {
	breakLine();
}

void Printer::flushLine(bool preserveSpace) {
	try {
		$nc(this->_writer)->write(this->_buffer, 0, this->_pos);
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
	}
	this->_pos = 0;
}

void Printer::flush() {
	try {
		$nc(this->_writer)->write(this->_buffer, 0, this->_pos);
		$nc(this->_writer)->flush();
	} catch ($IOException& except) {
		if (this->_exception == nullptr) {
			$set(this, _exception, except);
		}
		$throw(except);
	}
	this->_pos = 0;
}

void Printer::indent() {
}

void Printer::unindent() {
}

int32_t Printer::getNextIndent() {
	return 0;
}

void Printer::setNextIndent(int32_t indent) {
}

void Printer::setThisIndent(int32_t indent) {
}

Printer::Printer() {
}

$Class* Printer::load$($String* name, bool initialize) {
	$loadClass(Printer, name, initialize, &_Printer_ClassInfo_, allocate$Printer);
	return class$;
}

$Class* Printer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com