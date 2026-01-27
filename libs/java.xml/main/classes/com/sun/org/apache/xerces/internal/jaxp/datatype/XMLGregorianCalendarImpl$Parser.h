#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl$Parser_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl$Parser_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.XMLGregorianCalendarImpl$Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {
								class XMLGregorianCalendarImpl;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

class XMLGregorianCalendarImpl$Parser : public ::java::lang::Object {
	$class(XMLGregorianCalendarImpl$Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLGregorianCalendarImpl$Parser();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl* this$0, $String* format, $String* value);
	void parse();
	::java::math::BigDecimal* parseBigDecimal();
	int32_t parseInt(int32_t minDigits, int32_t maxDigits);
	void parseYear();
	char16_t peek();
	char16_t read();
	void skip(char16_t ch);
	::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl* this$0 = nullptr;
	$String* format = nullptr;
	$String* value = nullptr;
	int32_t flen = 0;
	int32_t vlen = 0;
	int32_t fidx = 0;
	int32_t vidx = 0;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_XMLGregorianCalendarImpl$Parser_h_