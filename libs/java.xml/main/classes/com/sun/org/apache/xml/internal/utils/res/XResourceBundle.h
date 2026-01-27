#ifndef _com_sun_org_apache_xml_internal_utils_res_XResourceBundle_h_
#define _com_sun_org_apache_xml_internal_utils_res_XResourceBundle_h_
//$ class com.sun.org.apache.xml.internal.utils.res.XResourceBundle
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

#pragma push_macro("ERROR_RESOURCES")
#undef ERROR_RESOURCES
#pragma push_macro("LANG_ADDITIVE")
#undef LANG_ADDITIVE
#pragma push_macro("LANG_ALPHABET")
#undef LANG_ALPHABET
#pragma push_macro("LANG_BUNDLE_NAME")
#undef LANG_BUNDLE_NAME
#pragma push_macro("LANG_LEFTTORIGHT")
#undef LANG_LEFTTORIGHT
#pragma push_macro("LANG_MULTIPLIER")
#undef LANG_MULTIPLIER
#pragma push_macro("LANG_MULTIPLIER_CHAR")
#undef LANG_MULTIPLIER_CHAR
#pragma push_macro("LANG_MULT_ADD")
#undef LANG_MULT_ADD
#pragma push_macro("LANG_NUMBERGROUPS")
#undef LANG_NUMBERGROUPS
#pragma push_macro("LANG_NUMBERING")
#undef LANG_NUMBERING
#pragma push_macro("LANG_NUM_TABLES")
#undef LANG_NUM_TABLES
#pragma push_macro("LANG_ORIENTATION")
#undef LANG_ORIENTATION
#pragma push_macro("LANG_RIGHTTOLEFT")
#undef LANG_RIGHTTOLEFT
#pragma push_macro("LANG_TRAD_ALPHABET")
#undef LANG_TRAD_ALPHABET
#pragma push_macro("MULT_FOLLOWS")
#undef MULT_FOLLOWS
#pragma push_macro("MULT_ORDER")
#undef MULT_ORDER
#pragma push_macro("MULT_PRECEDES")
#undef MULT_PRECEDES
#pragma push_macro("XSLT_RESOURCE")
#undef XSLT_RESOURCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

class XResourceBundle : public ::java::util::ListResourceBundle {
	$class(XResourceBundle, 0, ::java::util::ListResourceBundle)
public:
	XResourceBundle();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $String* ERROR_RESOURCES;
	static $String* XSLT_RESOURCE;
	static $String* LANG_BUNDLE_NAME;
	static $String* MULT_ORDER;
	static $String* MULT_PRECEDES;
	static $String* MULT_FOLLOWS;
	static $String* LANG_ORIENTATION;
	static $String* LANG_RIGHTTOLEFT;
	static $String* LANG_LEFTTORIGHT;
	static $String* LANG_NUMBERING;
	static $String* LANG_ADDITIVE;
	static $String* LANG_MULT_ADD;
	static $String* LANG_MULTIPLIER;
	static $String* LANG_MULTIPLIER_CHAR;
	static $String* LANG_NUMBERGROUPS;
	static $String* LANG_NUM_TABLES;
	static $String* LANG_ALPHABET;
	static $String* LANG_TRAD_ALPHABET;
};

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_RESOURCES")
#pragma pop_macro("LANG_ADDITIVE")
#pragma pop_macro("LANG_ALPHABET")
#pragma pop_macro("LANG_BUNDLE_NAME")
#pragma pop_macro("LANG_LEFTTORIGHT")
#pragma pop_macro("LANG_MULTIPLIER")
#pragma pop_macro("LANG_MULTIPLIER_CHAR")
#pragma pop_macro("LANG_MULT_ADD")
#pragma pop_macro("LANG_NUMBERGROUPS")
#pragma pop_macro("LANG_NUMBERING")
#pragma pop_macro("LANG_NUM_TABLES")
#pragma pop_macro("LANG_ORIENTATION")
#pragma pop_macro("LANG_RIGHTTOLEFT")
#pragma pop_macro("LANG_TRAD_ALPHABET")
#pragma pop_macro("MULT_FOLLOWS")
#pragma pop_macro("MULT_ORDER")
#pragma pop_macro("MULT_PRECEDES")
#pragma pop_macro("XSLT_RESOURCE")

#endif // _com_sun_org_apache_xml_internal_utils_res_XResourceBundle_h_