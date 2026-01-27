#include <org/xml/sax/helpers/NamespaceSupport$Context.h>

#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <org/xml/sax/helpers/NamespaceSupport.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NamespaceSupport = ::org::xml::sax::helpers::NamespaceSupport;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _NamespaceSupport$Context_FieldInfo_[] = {
	{"this$0", "Lorg/xml/sax/helpers/NamespaceSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NamespaceSupport$Context, this$0)},
	{"prefixTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(NamespaceSupport$Context, prefixTable)},
	{"uriTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(NamespaceSupport$Context, uriTable)},
	{"elementNameTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;", 0, $field(NamespaceSupport$Context, elementNameTable)},
	{"attributeNameTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;", 0, $field(NamespaceSupport$Context, attributeNameTable)},
	{"defaultNS", "Ljava/lang/String;", nullptr, 0, $field(NamespaceSupport$Context, defaultNS)},
	{"declarations", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(NamespaceSupport$Context, declarations)},
	{"declSeen", "Z", nullptr, $PRIVATE, $field(NamespaceSupport$Context, declSeen)},
	{"parent", "Lorg/xml/sax/helpers/NamespaceSupport$Context;", nullptr, $PRIVATE, $field(NamespaceSupport$Context, parent)},
	{}
};

$MethodInfo _NamespaceSupport$Context_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/helpers/NamespaceSupport;)V", nullptr, 0, $method(NamespaceSupport$Context, init$, void, $NamespaceSupport*)},
	{"clear", "()V", nullptr, 0, $method(NamespaceSupport$Context, clear, void)},
	{"copyTables", "()V", nullptr, $PRIVATE, $method(NamespaceSupport$Context, copyTables, void)},
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(NamespaceSupport$Context, declarePrefix, void, $String*, $String*)},
	{"getDeclaredPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", 0, $method(NamespaceSupport$Context, getDeclaredPrefixes, $Enumeration*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(NamespaceSupport$Context, getPrefix, $String*, $String*)},
	{"getPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", 0, $method(NamespaceSupport$Context, getPrefixes, $Enumeration*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(NamespaceSupport$Context, getURI, $String*, $String*)},
	{"processName", "(Ljava/lang/String;Z)[Ljava/lang/String;", nullptr, 0, $method(NamespaceSupport$Context, processName, $StringArray*, $String*, bool)},
	{"setParent", "(Lorg/xml/sax/helpers/NamespaceSupport$Context;)V", nullptr, 0, $method(NamespaceSupport$Context, setParent, void, NamespaceSupport$Context*)},
	{}
};

$InnerClassInfo _NamespaceSupport$Context_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.NamespaceSupport$Context", "org.xml.sax.helpers.NamespaceSupport", "Context", $FINAL},
	{}
};

$ClassInfo _NamespaceSupport$Context_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.xml.sax.helpers.NamespaceSupport$Context",
	"java.lang.Object",
	nullptr,
	_NamespaceSupport$Context_FieldInfo_,
	_NamespaceSupport$Context_MethodInfo_,
	nullptr,
	nullptr,
	_NamespaceSupport$Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.NamespaceSupport"
};

$Object* allocate$NamespaceSupport$Context($Class* clazz) {
	return $of($alloc(NamespaceSupport$Context));
}

void NamespaceSupport$Context::init$($NamespaceSupport* this$0) {
	$set(this, this$0, this$0);
	$set(this, defaultNS, nullptr);
	$set(this, declarations, nullptr);
	this->declSeen = false;
	$set(this, parent, nullptr);
	copyTables();
}

void NamespaceSupport$Context::setParent(NamespaceSupport$Context* parent) {
	$set(this, parent, parent);
	$set(this, declarations, nullptr);
	$set(this, prefixTable, $nc(parent)->prefixTable);
	$set(this, uriTable, parent->uriTable);
	$set(this, elementNameTable, parent->elementNameTable);
	$set(this, attributeNameTable, parent->attributeNameTable);
	$set(this, defaultNS, parent->defaultNS);
	this->declSeen = false;
}

void NamespaceSupport$Context::clear() {
	$set(this, parent, nullptr);
	$set(this, prefixTable, nullptr);
	$set(this, uriTable, nullptr);
	$set(this, elementNameTable, nullptr);
	$set(this, attributeNameTable, nullptr);
	$set(this, defaultNS, nullptr);
}

void NamespaceSupport$Context::declarePrefix($String* prefix$renamed, $String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, uri$renamed);
	if (!this->declSeen) {
		copyTables();
	}
	if (this->declarations == nullptr) {
		$set(this, declarations, $new($ArrayList));
	}
	$assign(prefix, $nc(prefix)->intern());
	$assign(uri, $nc(uri)->intern());
	if (""_s->equals(prefix)) {
		if (""_s->equals(uri)) {
			$set(this, defaultNS, nullptr);
		} else {
			$set(this, defaultNS, uri);
		}
	} else {
		$nc(this->prefixTable)->put(prefix, uri);
		$nc(this->uriTable)->put(uri, prefix);
	}
	$nc(this->declarations)->add(prefix);
}

$StringArray* NamespaceSupport$Context::processName($String* qName, bool isAttribute) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, name, nullptr);
	$var($Map, table, nullptr);
	if (isAttribute) {
		$assign(table, this->attributeNameTable);
	} else {
		$assign(table, this->elementNameTable);
	}
	$assign(name, $cast($StringArray, $nc(table)->get(qName)));
	if (name != nullptr) {
		return name;
	}
	$assign(name, $new($StringArray, 3));
	name->set(2, $($nc(qName)->intern()));
	int32_t index = qName->indexOf((int32_t)u':');
	if (index == -1) {
		if (isAttribute) {
			if (qName == "xmlns"_s && this->this$0->namespaceDeclUris) {
				name->set(0, "http://www.w3.org/xmlns/2000/"_s);
			} else {
				name->set(0, ""_s);
			}
		} else if (this->defaultNS == nullptr) {
			name->set(0, ""_s);
		} else {
			name->set(0, this->defaultNS);
		}
		name->set(1, name->get(2));
	} else {
		$var($String, prefix, qName->substring(0, index));
		$var($String, local, qName->substring(index + 1));
		$var($String, uri, nullptr);
		if (""_s->equals(prefix)) {
			$assign(uri, this->defaultNS);
		} else {
			$assign(uri, $cast($String, $nc(this->prefixTable)->get(prefix)));
		}
		if (uri == nullptr || (!isAttribute && "xmlns"_s->equals(prefix))) {
			return nullptr;
		}
		name->set(0, uri);
		name->set(1, $(local->intern()));
	}
	table->put(name->get(2), name);
	return name;
}

$String* NamespaceSupport$Context::getURI($String* prefix) {
	if (""_s->equals(prefix)) {
		return this->defaultNS;
	} else if (this->prefixTable == nullptr) {
		return nullptr;
	} else {
		return $cast($String, $nc(this->prefixTable)->get(prefix));
	}
}

$String* NamespaceSupport$Context::getPrefix($String* uri) {
	if (this->uriTable == nullptr) {
		return nullptr;
	} else {
		return $cast($String, $nc(this->uriTable)->get(uri));
	}
}

$Enumeration* NamespaceSupport$Context::getDeclaredPrefixes() {
	if (this->declarations == nullptr) {
		$init($NamespaceSupport);
		return $NamespaceSupport::EMPTY_ENUMERATION;
	} else {
		return $Collections::enumeration(this->declarations);
	}
}

$Enumeration* NamespaceSupport$Context::getPrefixes() {
	if (this->prefixTable == nullptr) {
		$init($NamespaceSupport);
		return $NamespaceSupport::EMPTY_ENUMERATION;
	} else {
		return $Collections::enumeration($($nc(this->prefixTable)->keySet()));
	}
}

void NamespaceSupport$Context::copyTables() {
	if (this->prefixTable != nullptr) {
		$set(this, prefixTable, $new($HashMap, this->prefixTable));
	} else {
		$set(this, prefixTable, $new($HashMap));
	}
	if (this->uriTable != nullptr) {
		$set(this, uriTable, $new($HashMap, this->uriTable));
	} else {
		$set(this, uriTable, $new($HashMap));
	}
	$set(this, elementNameTable, $new($HashMap));
	$set(this, attributeNameTable, $new($HashMap));
	this->declSeen = true;
}

NamespaceSupport$Context::NamespaceSupport$Context() {
}

$Class* NamespaceSupport$Context::load$($String* name, bool initialize) {
	$loadClass(NamespaceSupport$Context, name, initialize, &_NamespaceSupport$Context_ClassInfo_, allocate$NamespaceSupport$Context);
	return class$;
}

$Class* NamespaceSupport$Context::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org