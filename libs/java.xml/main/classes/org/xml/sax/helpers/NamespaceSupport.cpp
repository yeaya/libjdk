#include <org/xml/sax/helpers/NamespaceSupport.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EmptyStackException.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <org/xml/sax/helpers/NamespaceSupport$Context.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION
#undef NSDECL
#undef XMLNS

using $NamespaceSupport$ContextArray = $Array<::org::xml::sax::helpers::NamespaceSupport$Context>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EmptyStackException = ::java::util::EmptyStackException;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $NamespaceSupport$Context = ::org::xml::sax::helpers::NamespaceSupport$Context;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$String* NamespaceSupport::XMLNS = nullptr;
$String* NamespaceSupport::NSDECL = nullptr;
$Enumeration* NamespaceSupport::EMPTY_ENUMERATION = nullptr;

void NamespaceSupport::init$() {
	reset();
}

void NamespaceSupport::reset() {
	$set(this, contexts, $new($NamespaceSupport$ContextArray, 32));
	this->namespaceDeclUris = false;
	this->contextPos = 0;
	this->contexts->set(this->contextPos, $set(this, currentContext, $new($NamespaceSupport$Context, this)));
	this->currentContext->declarePrefix("xml"_s, NamespaceSupport::XMLNS);
}

void NamespaceSupport::pushContext() {
	int32_t max = $nc(this->contexts)->length;
	++this->contextPos;
	if (this->contextPos >= max) {
		$var($NamespaceSupport$ContextArray, newContexts, $new($NamespaceSupport$ContextArray, max * 2));
		$System::arraycopy(this->contexts, 0, newContexts, 0, max);
		max *= 2;
		$set(this, contexts, newContexts);
	}
	$set(this, currentContext, this->contexts->get(this->contextPos));
	if (this->currentContext == nullptr) {
		this->contexts->set(this->contextPos, $set(this, currentContext, $new($NamespaceSupport$Context, this)));
	}
	if (this->contextPos > 0) {
		$nc(this->currentContext)->setParent(this->contexts->get(this->contextPos - 1));
	}
}

void NamespaceSupport::popContext() {
	$nc($nc(this->contexts)->get(this->contextPos))->clear();
	--this->contextPos;
	if (this->contextPos < 0) {
		$throwNew($EmptyStackException);
	}
	$set(this, currentContext, $nc(this->contexts)->get(this->contextPos));
}

bool NamespaceSupport::declarePrefix($String* prefix, $String* uri) {
	bool var$0 = $nc(prefix)->equals("xml"_s);
	if (var$0 || prefix->equals("xmlns"_s)) {
		return false;
	} else {
		$nc(this->currentContext)->declarePrefix(prefix, uri);
		return true;
	}
}

$StringArray* NamespaceSupport::processName($String* qName, $StringArray* parts, bool isAttribute) {
	$var($StringArray, myParts, $nc(this->currentContext)->processName(qName, isAttribute));
	if (myParts == nullptr) {
		return nullptr;
	} else {
		$nc(parts)->set(0, myParts->get(0));
		parts->set(1, myParts->get(1));
		parts->set(2, myParts->get(2));
		return parts;
	}
}

$String* NamespaceSupport::getURI($String* prefix) {
	return $nc(this->currentContext)->getURI(prefix);
}

$Enumeration* NamespaceSupport::getPrefixes() {
	return $nc(this->currentContext)->getPrefixes();
}

$String* NamespaceSupport::getPrefix($String* uri) {
	return $nc(this->currentContext)->getPrefix(uri);
}

$Enumeration* NamespaceSupport::getPrefixes($String* uri) {
	$useLocalObjectStack();
	$var($List, prefixes, $new($ArrayList));
	$var($Enumeration, allPrefixes, getPrefixes());
	while ($nc(allPrefixes)->hasMoreElements()) {
		$var($String, prefix, $cast($String, allPrefixes->nextElement()));
		if ($nc(uri)->equals($(getURI(prefix)))) {
			prefixes->add(prefix);
		}
	}
	return $Collections::enumeration(prefixes);
}

$Enumeration* NamespaceSupport::getDeclaredPrefixes() {
	return $nc(this->currentContext)->getDeclaredPrefixes();
}

void NamespaceSupport::setNamespaceDeclUris(bool value) {
	if (this->contextPos != 0) {
		$throwNew($IllegalStateException);
	}
	if (value == this->namespaceDeclUris) {
		return;
	}
	this->namespaceDeclUris = value;
	if (value) {
		$nc(this->currentContext)->declarePrefix("xmlns"_s, NamespaceSupport::NSDECL);
	} else {
		$nc(this->contexts)->set(this->contextPos, $set(this, currentContext, $new($NamespaceSupport$Context, this)));
		this->currentContext->declarePrefix("xml"_s, NamespaceSupport::XMLNS);
	}
}

bool NamespaceSupport::isNamespaceDeclUris() {
	return this->namespaceDeclUris;
}

void NamespaceSupport::clinit$($Class* clazz) {
	$assignStatic(NamespaceSupport::XMLNS, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(NamespaceSupport::NSDECL, "http://www.w3.org/xmlns/2000/"_s);
	$assignStatic(NamespaceSupport::EMPTY_ENUMERATION, $Collections::enumeration($$cast($AbstractCollection, $new($ArrayList))));
}

NamespaceSupport::NamespaceSupport() {
}

$Class* NamespaceSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XMLNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceSupport, XMLNS)},
		{"NSDECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceSupport, NSDECL)},
		{"EMPTY_ENUMERATION", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NamespaceSupport, EMPTY_ENUMERATION)},
		{"contexts", "[Lorg/xml/sax/helpers/NamespaceSupport$Context;", nullptr, $PRIVATE, $field(NamespaceSupport, contexts)},
		{"currentContext", "Lorg/xml/sax/helpers/NamespaceSupport$Context;", nullptr, $PRIVATE, $field(NamespaceSupport, currentContext)},
		{"contextPos", "I", nullptr, $PRIVATE, $field(NamespaceSupport, contextPos)},
		{"namespaceDeclUris", "Z", nullptr, $PRIVATE, $field(NamespaceSupport, namespaceDeclUris)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NamespaceSupport, init$, void)},
		{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, declarePrefix, bool, $String*, $String*)},
		{"getDeclaredPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getDeclaredPrefixes, $Enumeration*)},
		{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getPrefix, $String*, $String*)},
		{"getPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getPrefixes, $Enumeration*)},
		{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getPrefixes, $Enumeration*, $String*)},
		{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getURI, $String*, $String*)},
		{"isNamespaceDeclUris", "()Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, isNamespaceDeclUris, bool)},
		{"popContext", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, popContext, void)},
		{"processName", "(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, processName, $StringArray*, $String*, $StringArray*, bool)},
		{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, pushContext, void)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, reset, void)},
		{"setNamespaceDeclUris", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, setNamespaceDeclUris, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.xml.sax.helpers.NamespaceSupport$Context", "org.xml.sax.helpers.NamespaceSupport", "Context", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.helpers.NamespaceSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"org.xml.sax.helpers.NamespaceSupport$Context"
	};
	$loadClass(NamespaceSupport, name, initialize, &classInfo$$, NamespaceSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NamespaceSupport);
	});
	return class$;
}

$Class* NamespaceSupport::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org