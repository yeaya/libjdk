#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToStream;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ToStream$CharacterBuffer : public ::java::lang::Object {
	$class(ToStream$CharacterBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToStream$CharacterBuffer();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToStream* this$0);
	virtual void addEntityReference($String* entityName);
	virtual void addRawText($chars* chars, int32_t start, int32_t length);
	virtual void addText($chars* chars, int32_t start, int32_t length);
	virtual void clear();
	virtual void flush(bool skipBeginningNewlines);
	virtual bool isAnyCharactersBuffered();
	virtual $chars* toChars();
	::com::sun::org::apache::xml::internal::serializer::ToStream* this$0 = nullptr;
	::java::util::List* bufferedCharacters = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer_h_