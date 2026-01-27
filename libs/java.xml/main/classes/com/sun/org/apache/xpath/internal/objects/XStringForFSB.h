#ifndef _com_sun_org_apache_xpath_internal_objects_XStringForFSB_h_
#define _com_sun_org_apache_xpath_internal_objects_XStringForFSB_h_
//$ class com.sun.org.apache.xpath.internal.objects.XStringForFSB
//$ extends com.sun.org.apache.xpath.internal.objects.XString

#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class FastStringBuffer;
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $export XStringForFSB : public ::com::sun::org::apache::xpath::internal::objects::XString {
	$class(XStringForFSB, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XString)
public:
	XStringForFSB();
	using ::com::sun::org::apache::xpath::internal::objects::XString::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XString::indexOf;
	using ::com::sun::org::apache::xpath::internal::objects::XString::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XString::error;
	void init$(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* val, int32_t start, int32_t length);
	void init$($String* val);
	virtual void appendToFsb(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb) override;
	virtual char16_t charAt(int32_t index) override;
	virtual int32_t compareTo(::com::sun::org::apache::xml::internal::utils::XMLString* xstr) override;
	virtual int32_t compareToIgnoreCase(::com::sun::org::apache::xml::internal::utils::XMLString* xstr) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* concat($String* str) override;
	virtual void dispatchAsComment(::org::xml::sax::ext::LexicalHandler* lh) override;
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) override;
	virtual bool equals(::com::sun::org::apache::xml::internal::utils::XMLString* obj2) override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual bool equals($String* anotherString) override;
	virtual bool equals(Object$* obj2) override;
	virtual bool equalsIgnoreCase($String* anotherString) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) override;
	virtual ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb();
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) override;
	virtual bool hasString() override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(int32_t ch) override;
	virtual int32_t indexOf(int32_t ch, int32_t fromIndex) override;
	static bool isSpace(char16_t ch);
	virtual int32_t length() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::num;
	virtual $Object* object() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::rtf;
	using ::com::sun::org::apache::xpath::internal::objects::XString::startsWith;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix, int32_t toffset) override;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix) override;
	virtual $String* str() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex, int32_t endIndex) override;
	virtual double toDouble() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* trim() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::xstr;
	static const int64_t serialVersionUID = (int64_t)0xEAB98CFB72E4AB8C;
	int32_t m_start = 0;
	int32_t m_length = 0;
	$String* m_strCache = nullptr;
	int32_t m_hash = 0;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XStringForFSB_h_