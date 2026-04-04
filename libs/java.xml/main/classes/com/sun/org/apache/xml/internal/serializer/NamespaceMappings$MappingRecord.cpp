#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <jcpp.h>

using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

void NamespaceMappings$MappingRecord::init$($NamespaceMappings* this$0, $String* prefix, $String* uri, int32_t depth) {
	$set(this, this$0, this$0);
	$set(this, m_prefix, prefix);
	$set(this, m_uri, uri);
	this->m_declarationDepth = depth;
}

NamespaceMappings$MappingRecord::NamespaceMappings$MappingRecord() {
}

$Class* NamespaceMappings$MappingRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $FINAL | $SYNTHETIC, $field(NamespaceMappings$MappingRecord, this$0)},
		{"m_prefix", "Ljava/lang/String;", nullptr, $FINAL, $field(NamespaceMappings$MappingRecord, m_prefix)},
		{"m_uri", "Ljava/lang/String;", nullptr, $FINAL, $field(NamespaceMappings$MappingRecord, m_uri)},
		{"m_declarationDepth", "I", nullptr, $FINAL, $field(NamespaceMappings$MappingRecord, m_declarationDepth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(NamespaceMappings$MappingRecord, init$, void, $NamespaceMappings*, $String*, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.NamespaceMappings$MappingRecord", "com.sun.org.apache.xml.internal.serializer.NamespaceMappings", "MappingRecord", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.NamespaceMappings$MappingRecord",
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
		"com.sun.org.apache.xml.internal.serializer.NamespaceMappings"
	};
	$loadClass(NamespaceMappings$MappingRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamespaceMappings$MappingRecord);
	});
	return class$;
}

$Class* NamespaceMappings$MappingRecord::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com