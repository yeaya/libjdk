#ifndef _com_sun_org_apache_xerces_internal_util_XMLSymbols_h_
#define _com_sun_org_apache_xerces_internal_util_XMLSymbols_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLSymbols
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY_STRING")
#undef EMPTY_STRING
#pragma push_macro("PREFIX_XML")
#undef PREFIX_XML
#pragma push_macro("PREFIX_XMLNS")
#undef PREFIX_XMLNS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLSymbols : public ::java::lang::Object {
	$class(XMLSymbols, 0, ::java::lang::Object)
public:
	XMLSymbols();
	void init$();
	static $String* EMPTY_STRING;
	static $String* PREFIX_XML;
	static $String* PREFIX_XMLNS;
	static $String* fANYSymbol;
	static $String* fCDATASymbol;
	static $String* fIDSymbol;
	static $String* fIDREFSymbol;
	static $String* fIDREFSSymbol;
	static $String* fENTITYSymbol;
	static $String* fENTITIESSymbol;
	static $String* fNMTOKENSymbol;
	static $String* fNMTOKENSSymbol;
	static $String* fNOTATIONSymbol;
	static $String* fENUMERATIONSymbol;
	static $String* fIMPLIEDSymbol;
	static $String* fREQUIREDSymbol;
	static $String* fFIXEDSymbol;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STRING")
#pragma pop_macro("PREFIX_XML")
#pragma pop_macro("PREFIX_XMLNS")

#endif // _com_sun_org_apache_xerces_internal_util_XMLSymbols_h_