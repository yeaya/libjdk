#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl$Parser.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl.h>
#include <java/lang/InternalError.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $XMLGregorianCalendarImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _XMLGregorianCalendarImpl$Parser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLGregorianCalendarImpl$Parser, this$0)},
	{"format", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLGregorianCalendarImpl$Parser, format)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLGregorianCalendarImpl$Parser, value)},
	{"flen", "I", nullptr, $PRIVATE | $FINAL, $field(XMLGregorianCalendarImpl$Parser, flen)},
	{"vlen", "I", nullptr, $PRIVATE | $FINAL, $field(XMLGregorianCalendarImpl$Parser, vlen)},
	{"fidx", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl$Parser, fidx)},
	{"vidx", "I", nullptr, $PRIVATE, $field(XMLGregorianCalendarImpl$Parser, vidx)},
	{}
};

$MethodInfo _XMLGregorianCalendarImpl$Parser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, init$, void, $XMLGregorianCalendarImpl*, $String*, $String*)},
	{"parse", "()V", nullptr, $PUBLIC, $method(XMLGregorianCalendarImpl$Parser, parse, void), "java.lang.IllegalArgumentException"},
	{"parseBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, parseBigDecimal, $BigDecimal*), "java.lang.IllegalArgumentException"},
	{"parseInt", "(II)I", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, parseInt, int32_t, int32_t, int32_t), "java.lang.IllegalArgumentException"},
	{"parseYear", "()V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, parseYear, void), "java.lang.IllegalArgumentException"},
	{"peek", "()C", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, peek, char16_t), "java.lang.IllegalArgumentException"},
	{"read", "()C", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, read, char16_t), "java.lang.IllegalArgumentException"},
	{"skip", "(C)V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$Parser, skip, void, char16_t), "java.lang.IllegalArgumentException"},
	{}
};

$InnerClassInfo _XMLGregorianCalendarImpl$Parser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$Parser", "com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl", "Parser", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _XMLGregorianCalendarImpl$Parser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$Parser",
	"java.lang.Object",
	nullptr,
	_XMLGregorianCalendarImpl$Parser_FieldInfo_,
	_XMLGregorianCalendarImpl$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_XMLGregorianCalendarImpl$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl"
};

$Object* allocate$XMLGregorianCalendarImpl$Parser($Class* clazz) {
	return $of($alloc(XMLGregorianCalendarImpl$Parser));
}

void XMLGregorianCalendarImpl$Parser::init$($XMLGregorianCalendarImpl* this$0, $String* format, $String* value) {
	$set(this, this$0, this$0);
	$set(this, format, format);
	$set(this, value, value);
	this->flen = $nc(format)->length();
	this->vlen = $nc(value)->length();
}

void XMLGregorianCalendarImpl$Parser::parse() {
	$useLocalCurrentObjectStackCache();
	while (this->fidx < this->flen) {
		char16_t fch = $nc(this->format)->charAt(this->fidx++);
		if (fch != u'%') {
			skip(fch);
			continue;
		}
		{
			char16_t vch = 0;
			switch ($nc(this->format)->charAt(this->fidx++)) {
			case u'Y':
				{
					parseYear();
					break;
				}
			case u'M':
				{
					this->this$0->setMonth(parseInt(2, 2));
					break;
				}
			case u'D':
				{
					this->this$0->setDay(parseInt(2, 2));
					break;
				}
			case u'h':
				{
					this->this$0->setHour(parseInt(2, 2), false);
					break;
				}
			case u'm':
				{
					this->this$0->setMinute(parseInt(2, 2));
					break;
				}
			case u's':
				{
					this->this$0->setSecond(parseInt(2, 2));
					if (peek() == u'.') {
						this->this$0->setFractionalSecond($(parseBigDecimal()));
					}
					break;
				}
			case u'z':
				{
					vch = peek();
					if (vch == u'Z') {
						++this->vidx;
						this->this$0->setTimezone(0);
					} else if (vch == u'+' || vch == u'-') {
						++this->vidx;
						int32_t h = parseInt(2, 2);
						skip(u':');
						int32_t m = parseInt(2, 2);
						this->this$0->setTimezone((h * 60 + m) * (vch == u'+' ? 1 : -1));
					}
					break;
				}
			default:
				{
					$throwNew($InternalError);
				}
			}
		}
	}
	if (this->vidx != this->vlen) {
		$throwNew($IllegalArgumentException, this->value);
	}
	this->this$0->testHour();
}

char16_t XMLGregorianCalendarImpl$Parser::peek() {
	if (this->vidx == this->vlen) {
		return (char16_t)-1;
	}
	return $nc(this->value)->charAt(this->vidx);
}

char16_t XMLGregorianCalendarImpl$Parser::read() {
	if (this->vidx == this->vlen) {
		$throwNew($IllegalArgumentException, this->value);
	}
	return $nc(this->value)->charAt(this->vidx++);
}

void XMLGregorianCalendarImpl$Parser::skip(char16_t ch) {
	if (read() != ch) {
		$throwNew($IllegalArgumentException, this->value);
	}
}

int32_t XMLGregorianCalendarImpl$Parser::parseInt(int32_t minDigits, int32_t maxDigits) {
	int32_t n = 0;
	char16_t ch = 0;
	int32_t vstart = this->vidx;
	while ($XMLGregorianCalendarImpl::isDigit(ch = peek()) && (this->vidx - vstart) < maxDigits) {
		++this->vidx;
		n = n * 10 + ch - u'0';
	}
	if ((this->vidx - vstart) < minDigits) {
		$throwNew($IllegalArgumentException, this->value);
	}
	return n;
}

void XMLGregorianCalendarImpl$Parser::parseYear() {
	$useLocalCurrentObjectStackCache();
	int32_t vstart = this->vidx;
	int32_t sign = 0;
	if (peek() == u'-') {
		++this->vidx;
		sign = 1;
	}
	while ($XMLGregorianCalendarImpl::isDigit(peek())) {
		++this->vidx;
	}
	int32_t digits = this->vidx - vstart - sign;
	if (digits < 4) {
		$throwNew($IllegalArgumentException, this->value);
	}
	$var($String, yearString, $nc(this->value)->substring(vstart, this->vidx));
	if (digits < 10) {
		this->this$0->setYear($Integer::parseInt(yearString));
	} else {
		this->this$0->setYear($$new($BigInteger, yearString));
	}
}

$BigDecimal* XMLGregorianCalendarImpl$Parser::parseBigDecimal() {
	int32_t vstart = this->vidx;
	if (peek() == u'.') {
		++this->vidx;
	} else {
		$throwNew($IllegalArgumentException, this->value);
	}
	while ($XMLGregorianCalendarImpl::isDigit(peek())) {
		++this->vidx;
	}
	return $new($BigDecimal, $($nc(this->value)->substring(vstart, this->vidx)));
}

XMLGregorianCalendarImpl$Parser::XMLGregorianCalendarImpl$Parser() {
}

$Class* XMLGregorianCalendarImpl$Parser::load$($String* name, bool initialize) {
	$loadClass(XMLGregorianCalendarImpl$Parser, name, initialize, &_XMLGregorianCalendarImpl$Parser_ClassInfo_, allocate$XMLGregorianCalendarImpl$Parser);
	return class$;
}

$Class* XMLGregorianCalendarImpl$Parser::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com