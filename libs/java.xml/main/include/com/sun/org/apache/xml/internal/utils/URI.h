#ifndef _com_sun_org_apache_xml_internal_utils_URI_h_
#define _com_sun_org_apache_xml_internal_utils_URI_h_
//$ class com.sun.org.apache.xml.internal.utils.URI
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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
						namespace utils {

class $import URI : public ::java::io::Serializable {
	$class(URI, 0, ::java::io::Serializable)
public:
	URI();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::utils::URI* p_other);
	void init$($String* p_uriSpec);
	void init$(::com::sun::org::apache::xml::internal::utils::URI* p_base, $String* p_uriSpec);
	void init$($String* p_scheme, $String* p_schemeSpecificPart);
	void init$($String* p_scheme, $String* p_host, $String* p_path, $String* p_queryString, $String* p_fragment);
	void init$($String* p_scheme, $String* p_userinfo, $String* p_host, int32_t p_port, $String* p_path, $String* p_queryString, $String* p_fragment);
	virtual void appendPath($String* p_addToPath);
	virtual bool equals(Object$* p_test) override;
	virtual $String* getFragment();
	virtual $String* getHost();
	virtual $String* getPath(bool p_includeQueryString, bool p_includeFragment);
	virtual $String* getPath();
	virtual int32_t getPort();
	virtual $String* getQueryString();
	virtual $String* getScheme();
	virtual $String* getSchemeSpecificPart();
	virtual $String* getUserinfo();
	virtual int32_t hashCode() override;
	void initialize(::com::sun::org::apache::xml::internal::utils::URI* p_other);
	void initialize(::com::sun::org::apache::xml::internal::utils::URI* p_base, $String* p_uriSpec);
	void initializeAuthority($String* p_uriSpec);
	void initializePath($String* p_uriSpec);
	void initializeScheme($String* p_uriSpec);
	static bool isAlpha(char16_t p_char);
	static bool isAlphanum(char16_t p_char);
	static bool isConformantSchemeName($String* p_scheme);
	static bool isDigit(char16_t p_char);
	virtual bool isGenericURI();
	static bool isHex(char16_t p_char);
	static bool isReservedCharacter(char16_t p_char);
	static bool isURIString($String* p_uric);
	static bool isUnreservedCharacter(char16_t p_char);
	static bool isWellFormedAddress($String* p_address);
	virtual void setFragment($String* p_fragment);
	virtual void setHost($String* p_host);
	virtual void setPath($String* p_path);
	virtual void setPort(int32_t p_port);
	virtual void setQueryString($String* p_queryString);
	virtual void setScheme($String* p_scheme);
	virtual void setUserinfo($String* p_userinfo);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x627B00AC4EB312A9;
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

#endif // _com_sun_org_apache_xml_internal_utils_URI_h_