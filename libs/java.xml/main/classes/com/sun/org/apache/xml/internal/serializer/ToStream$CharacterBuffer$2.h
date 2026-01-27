#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$2_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$2_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$2
//$ extends com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters

#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
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

class ToStream$CharacterBuffer$2 : public ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters {
	$class(ToStream$CharacterBuffer$2, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters)
public:
	ToStream$CharacterBuffer$2();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1, $String* val$entityName);
	virtual bool flush(bool skipBeginningNewlines) override;
	virtual $chars* toChars() override;
	::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1 = nullptr;
	$String* val$entityName = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$2_h_