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

$ints* XMLGregorianCalendarImpl$DaysInMonth::table = nullptr;

void XMLGregorianCalendarImpl$DaysInMonth::init$() {
}

void XMLGregorianCalendarImpl$DaysInMonth::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"table", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGregorianCalendarImpl$DaysInMonth, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XMLGregorianCalendarImpl$DaysInMonth, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth", "com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl", "DaysInMonth", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$DaysInMonth",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl"
	};
	$loadClass(XMLGregorianCalendarImpl$DaysInMonth, name, initialize, &classInfo$$, XMLGregorianCalendarImpl$DaysInMonth::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLGregorianCalendarImpl$DaysInMonth);
	});
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