#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$GenericCharacters_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$GenericCharacters_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToStream$CharacterBuffer;
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
				namespace xml {
					namespace internal {
						namespace serializer {

class ToStream$CharacterBuffer$GenericCharacters : public ::java::lang::Object {
	$class(ToStream$CharacterBuffer$GenericCharacters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToStream$CharacterBuffer$GenericCharacters();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1);
	virtual bool flush(bool skipBeginningNewlines) {return false;}
	virtual $chars* toChars() {return nullptr;}
	::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1 = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$GenericCharacters_h_