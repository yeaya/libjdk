#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>

#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef XML_PREFIX

using $NamespaceMappings$MappingRecord = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings$MappingRecord;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _NamespaceMappings_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE, $field(NamespaceMappings, count)},
	{"m_namespaces", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord;>;>;", $PRIVATE, $field(NamespaceMappings, m_namespaces)},
	{"m_nodeStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord;>;", $PRIVATE, $field(NamespaceMappings, m_nodeStack)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NamespaceMappings, EMPTYSTRING)},
	{"XML_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NamespaceMappings, XML_PREFIX)},
	{}
};

$MethodInfo _NamespaceMappings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NamespaceMappings, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NamespaceMappings, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"generateNextPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceMappings, generateNextPrefix, $String*)},
	{"getMappingFromPrefix", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord;", nullptr, 0, $virtualMethod(NamespaceMappings, getMappingFromPrefix, $NamespaceMappings$MappingRecord*, $String*)},
	{"getMappingFromURI", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord;", nullptr, 0, $virtualMethod(NamespaceMappings, getMappingFromURI, $NamespaceMappings$MappingRecord*, $String*)},
	{"initNamespaces", "()V", nullptr, $PRIVATE, $method(NamespaceMappings, initNamespaces, void)},
	{"lookupNamespace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceMappings, lookupNamespace, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceMappings, lookupPrefix, $String*, $String*)},
	{"popNamespace", "(Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(NamespaceMappings, popNamespace, bool, $String*)},
	{"popNamespaces", "(ILorg/xml/sax/ContentHandler;)V", nullptr, 0, $virtualMethod(NamespaceMappings, popNamespaces, void, int32_t, $ContentHandler*)},
	{"pushNamespace", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, 0, $virtualMethod(NamespaceMappings, pushNamespace, bool, $String*, $String*, int32_t)},
	{"reset", "()V", nullptr, $FINAL, $method(NamespaceMappings, reset, void)},
	{}
};

$InnerClassInfo _NamespaceMappings_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.NamespaceMappings$MappingRecord", "com.sun.org.apache.xml.internal.serializer.NamespaceMappings", "MappingRecord", 0},
	{}
};

$ClassInfo _NamespaceMappings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.NamespaceMappings",
	"java.lang.Object",
	nullptr,
	_NamespaceMappings_FieldInfo_,
	_NamespaceMappings_MethodInfo_,
	nullptr,
	nullptr,
	_NamespaceMappings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.NamespaceMappings$MappingRecord"
};

$Object* allocate$NamespaceMappings($Class* clazz) {
	return $of($alloc(NamespaceMappings));
}

$String* NamespaceMappings::EMPTYSTRING = nullptr;
$String* NamespaceMappings::XML_PREFIX = nullptr;

void NamespaceMappings::init$() {
	$set(this, m_namespaces, $new($HashMap));
	$set(this, m_nodeStack, $new($Stack));
	initNamespaces();
}

void NamespaceMappings::initNamespaces() {
	$useLocalCurrentObjectStackCache();
	$var($Stack, stack, nullptr);
	$nc(this->m_namespaces)->put(NamespaceMappings::EMPTYSTRING, $assign(stack, $new($Stack)));
	$nc(stack)->push($$new($NamespaceMappings$MappingRecord, this, NamespaceMappings::EMPTYSTRING, NamespaceMappings::EMPTYSTRING, 0));
	$nc(this->m_namespaces)->put(NamespaceMappings::XML_PREFIX, $assign(stack, $new($Stack)));
	stack->push($$new($NamespaceMappings$MappingRecord, this, NamespaceMappings::XML_PREFIX, "http://www.w3.org/XML/1998/namespace"_s, 0));
	$nc(this->m_nodeStack)->push($$new($NamespaceMappings$MappingRecord, this, nullptr, nullptr, -1));
}

$String* NamespaceMappings::lookupNamespace($String* prefix) {
	$useLocalCurrentObjectStackCache();
	$var($Stack, stack, $cast($Stack, $nc(this->m_namespaces)->get(prefix)));
	return stack != nullptr && !stack->isEmpty() ? $nc(($cast($NamespaceMappings$MappingRecord, $($nc(stack)->peek()))))->m_uri : ($String*)nullptr;
}

$NamespaceMappings$MappingRecord* NamespaceMappings::getMappingFromPrefix($String* prefix) {
	$var($Stack, stack, $cast($Stack, $nc(this->m_namespaces)->get(prefix)));
	return stack != nullptr && !stack->isEmpty() ? ($cast($NamespaceMappings$MappingRecord, $nc(stack)->peek())) : ($NamespaceMappings$MappingRecord*)nullptr;
}

$String* NamespaceMappings::lookupPrefix($String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, foundPrefix, nullptr);
	$var($Iterator, itr, $nc($($nc(this->m_namespaces)->keySet()))->iterator());
	while ($nc(itr)->hasNext()) {
		$var($String, prefix, $cast($String, itr->next()));
		$var($String, uri2, lookupNamespace(prefix));
		if (uri2 != nullptr && uri2->equals(uri)) {
			$assign(foundPrefix, prefix);
			break;
		}
	}
	return foundPrefix;
}

$NamespaceMappings$MappingRecord* NamespaceMappings::getMappingFromURI($String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($NamespaceMappings$MappingRecord, foundMap, nullptr);
	$var($Iterator, itr, $nc($($nc(this->m_namespaces)->keySet()))->iterator());
	while ($nc(itr)->hasNext()) {
		$var($String, prefix, $cast($String, itr->next()));
		$var($NamespaceMappings$MappingRecord, map2, getMappingFromPrefix(prefix));
		if (map2 != nullptr && $nc((map2->m_uri))->equals(uri)) {
			$assign(foundMap, map2);
			break;
		}
	}
	return foundMap;
}

bool NamespaceMappings::popNamespace($String* prefix) {
	if ($nc(prefix)->startsWith(NamespaceMappings::XML_PREFIX)) {
		return false;
	}
	$var($Stack, stack, nullptr);
	if (($assign(stack, $cast($Stack, $nc(this->m_namespaces)->get(prefix)))) != nullptr) {
		$nc(stack)->pop();
		return true;
	}
	return false;
}

bool NamespaceMappings::pushNamespace($String* prefix, $String* uri, int32_t elemDepth) {
	$useLocalCurrentObjectStackCache();
	if ($nc(prefix)->startsWith(NamespaceMappings::XML_PREFIX)) {
		return false;
	}
	$var($Stack, stack, nullptr);
	if (($assign(stack, $cast($Stack, $nc(this->m_namespaces)->get(prefix)))) == nullptr) {
		$nc(this->m_namespaces)->put(prefix, $assign(stack, $new($Stack)));
	}
	bool var$0 = !$nc(stack)->empty();
	if (var$0 && $nc(uri)->equals($nc(($cast($NamespaceMappings$MappingRecord, $(stack->peek()))))->m_uri)) {
		return false;
	}
	$var($NamespaceMappings$MappingRecord, map, $new($NamespaceMappings$MappingRecord, this, prefix, uri, elemDepth));
	$nc(stack)->push(map);
	$nc(this->m_nodeStack)->push(map);
	return true;
}

void NamespaceMappings::popNamespaces(int32_t elemDepth, $ContentHandler* saxHandler) {
	$useLocalCurrentObjectStackCache();
	while (true) {
		if ($nc(this->m_nodeStack)->isEmpty()) {
			return;
		}
		$var($NamespaceMappings$MappingRecord, map, $cast($NamespaceMappings$MappingRecord, $nc(this->m_nodeStack)->peek()));
		int32_t depth = $nc(map)->m_declarationDepth;
		if (depth < elemDepth) {
			return;
		}
		$assign(map, $cast($NamespaceMappings$MappingRecord, $nc(this->m_nodeStack)->pop()));
		$var($String, prefix, map->m_prefix);
		popNamespace(prefix);
		if (saxHandler != nullptr) {
			try {
				saxHandler->endPrefixMapping(prefix);
			} catch ($SAXException& e) {
			}
		}
	}
}

$String* NamespaceMappings::generateNextPrefix() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "ns"_s);
	return $concat(var$0, $$str((this->count++)));
}

$Object* NamespaceMappings::clone() {
	$var(NamespaceMappings, clone, $new(NamespaceMappings));
	$set(clone, m_nodeStack, $cast($Stack, $nc(this->m_nodeStack)->clone()));
	$set(clone, m_namespaces, $cast($HashMap, $nc(this->m_namespaces)->clone()));
	clone->count = this->count;
	return $of(clone);
}

void NamespaceMappings::reset() {
	this->count = 0;
	$nc(this->m_namespaces)->clear();
	$nc(this->m_nodeStack)->clear();
	initNamespaces();
}

NamespaceMappings::NamespaceMappings() {
}

void clinit$NamespaceMappings($Class* class$) {
	$assignStatic(NamespaceMappings::EMPTYSTRING, ""_s);
	$assignStatic(NamespaceMappings::XML_PREFIX, "xml"_s);
}

$Class* NamespaceMappings::load$($String* name, bool initialize) {
	$loadClass(NamespaceMappings, name, initialize, &_NamespaceMappings_ClassInfo_, clinit$NamespaceMappings, allocate$NamespaceMappings);
	return class$;
}

$Class* NamespaceMappings::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com