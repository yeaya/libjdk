#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl$DaysInMonth.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _XMLGregorianCalendarImpl$DaysInMonth_FieldInfo_[] = {
	{"table", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl$DaysInMonth, table)},
	{}
};

$MethodInfo _XMLGregorianCalendarImpl$DaysInMonth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$DaysInMonth, init$, void)},
	{}
};

$InnerClassInfo _XMLGregorianCalendarImpl$DaysInMonth_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth", "com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl", "DaysInMonth", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XMLGregorianCalendarImpl$DaysInMonth_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth",
	"java.lang.Object",
	nullptr,
	_XMLGregorianCalendarImpl$DaysInMonth_FieldInfo_,
	_XMLGregorianCalendarImpl$DaysInMonth_MethodInfo_,
	nullptr,
	nullptr,
	_XMLGregorianCalendarImpl$DaysInMonth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl"
};

$Object* allocate$XMLGregorianCalendarImpl$DaysInMonth($Class* clazz) {
	return $of($alloc(XMLGregorianCalendarImpl$DaysInMonth));
}

$ints* XMLGregorianCalendarImpl$DaysInMonth::table = nullptr;

void XMLGregorianCalendarImpl$DaysInMonth::init$() {
}

void clinit$XMLGregorianCalendarImpl$DaysInMonth($Class* class$) {
	$assignStatic(XMLGregorianCalendarImpl$DaysInMonth::table, $new($ints, {
		0,
		31,
		28,
		31,
		30,
		31,
		30,
		31,
		31,
		30,
		31,
		30,
		31
	}));
}

XMLGregorianCalendarImpl$DaysInMonth::XMLGregorianCalendarImpl$DaysInMonth() {
}

$Class* XMLGregorianCalendarImpl$DaysInMonth::load$($String* name, bool initialize) {
	$loadClass(XMLGregorianCalendarImpl$DaysInMonth, name, initialize, &_XMLGregorianCalendarImpl$DaysInMonth_ClassInfo_, clinit$XMLGregorianCalendarImpl$DaysInMonth, allocate$XMLGregorianCalendarImpl$DaysInMonth);
	return class$;
}

$Class* XMLGregorianCalendarImpl$DaysInMonth::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com