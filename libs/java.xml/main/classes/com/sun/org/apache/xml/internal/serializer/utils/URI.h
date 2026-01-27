#ifndef _com_sun_org_apache_xml_internal_serializer_utils_URI_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_URI_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.URI
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MARK_CHARACTERS")
#undef MARK_CHARACTERS
#pragma push_macro("RESERVED_CHARACTERS")
#undef RESERVED_CHARACTERS
#pragma push_macro("SCHEME_CHARACTERS")
#undef SCHEME_CHARACTERS
#pragma push_macro("URI")
#undef URI
#pragma push_macro("USERINFO_CHARACTERS")
#undef USERINFO_CHARACTERS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class URI : public ::java::lang::Object {
	$class(URI, 0, ::java::lang::Object)
public:
	URI();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serializer::utils::URI* p_other);
	void init$($String* p_uriSpec);
	void init$(::com::sun::org::apache::xml::internal::serializer::utils::URI* p_base, $String* p_uriSpec);
	void init$($String* p_scheme, $String* p_schemeSpecificPart);
	void init$($String* p_scheme, $String* p_host, $String* p_path, $String* p_queryString, $String* p_fragment);
	void init$($String* p_scheme, $String* p_userinfo, $String* p_host, int32_t p_port, $String* p_path, $String* p_queryString, $String* p_fragment);
	void appendPath($String* p_addToPath);
	virtual bool equals(Object$* p_test) override;
	$String* getFragment();
	$String* getHost();
	$String* getPath(bool p_includeQueryString, bool p_includeFragment);
	$String* getPath();
	int32_t getPort();
	$String* getQueryString();
	$String* getScheme();
	$String* getSchemeSpecificPart();
	$String* getUserinfo();
	virtual int32_t hashCode() override;
	void initialize(::com::sun::org::apache::xml::internal::serializer::utils::URI* p_other);
	void initialize(::com::sun::org::apache::xml::internal::serializer::utils::URI* p_base, $String* p_uriSpec);
	void initializeAuthority($String* p_uriSpec);
	void initializePath($String* p_uriSpec);
	void initializeScheme($String* p_uriSpec);
	static bool isAlpha(char16_t p_char);
	static bool isAlphanum(char16_t p_char);
	static bool isConformantSchemeName($String* p_scheme);
	static bool isDigit(char16_t p_char);
	bool isGenericURI();
	static bool isHex(char16_t p_char);
	static bool isReservedCharacter(char16_t p_char);
	static bool isURIString($String* p_uric);
	static bool isUnreservedCharacter(char16_t p_char);
	static bool isWellFormedAddress($String* p_address);
	void setFragment($String* p_fragment);
	void setHost($String* p_host);
	void setPath($String* p_path);
	void setPort(int32_t p_port);
	void setQueryString($String* p_queryString);
	void setScheme($String* p_scheme);
	void setUserinfo($String* p_userinfo);
	virtual $String* toString() override;
	static $String* RESERVED_CHARACTERS;
	static $String* MARK_CHARACTERS;
	static $String* SCHEME_CHARACTERS;
	static $String* USERINFO_CHARACTERS;
	$String* m_scheme = nullptr;
	$String* m_userinfo = nullptr;
	$String* m_host = nullptr;
	int32_t m_port = 0;
	$String* m_path = nullptr;
	$String* m_queryString = nullptr;
	$String* m_fragment = nullptr;
	static bool DEBUG;
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("MARK_CHARACTERS")
#pragma pop_macro("RESERVED_CHARACTERS")
#pragma pop_macro("SCHEME_CHARACTERS")
#pragma pop_macro("URI")
#pragma pop_macro("USERINFO_CHARACTERS")

#endif // _com_sun_org_apache_xml_internal_serializer_utils_URI_h_