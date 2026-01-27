#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>

#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef XML_DTD

using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLDTDDescription_FieldInfo_[] = {
	{"fRootName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDTDDescription, fRootName)},
	{"fPossibleRoots", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(XMLDTDDescription, fPossibleRoots)},
	{}
};

$MethodInfo _XMLDTDDescription_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLDTDDescription, init$, void, $XMLResourceIdentifier*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLDTDDescription, init$, void, $String*, $String*, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $method(XMLDTDDescription, init$, void, $XMLInputSource*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDDescription, equals, bool, Object$*)},
	{"getGrammarType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDDescription, getGrammarType, $String*)},
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDDescription, getRootName, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDTDDescription, hashCode, int32_t)},
	{"*setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPossibleRoots", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(XMLDTDDescription, setPossibleRoots, void, $List*)},
	{"*setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setRootName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDDescription, setRootName, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLDTDDescription_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDDescription",
	"com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLDTDDescription",
	_XMLDTDDescription_FieldInfo_,
	_XMLDTDDescription_MethodInfo_
};

$Object* allocate$XMLDTDDescription($Class* clazz) {
	return $of($alloc(XMLDTDDescription));
}

void XMLDTDDescription::setPublicId($String* publicId) {
	this->$XMLResourceIdentifierImpl::setPublicId(publicId);
}

void XMLDTDDescription::setLiteralSystemId($String* literalSystemId) {
	this->$XMLResourceIdentifierImpl::setLiteralSystemId(literalSystemId);
}

void XMLDTDDescription::setBaseSystemId($String* baseSystemId) {
	this->$XMLResourceIdentifierImpl::setBaseSystemId(baseSystemId);
}

void XMLDTDDescription::setExpandedSystemId($String* expandedSystemId) {
	this->$XMLResourceIdentifierImpl::setExpandedSystemId(expandedSystemId);
}

void XMLDTDDescription::setNamespace($String* namespace$) {
	this->$XMLResourceIdentifierImpl::setNamespace(namespace$);
}

$String* XMLDTDDescription::getPublicId() {
	 return this->$XMLResourceIdentifierImpl::getPublicId();
}

$String* XMLDTDDescription::getLiteralSystemId() {
	 return this->$XMLResourceIdentifierImpl::getLiteralSystemId();
}

$String* XMLDTDDescription::getBaseSystemId() {
	 return this->$XMLResourceIdentifierImpl::getBaseSystemId();
}

$String* XMLDTDDescription::getExpandedSystemId() {
	 return this->$XMLResourceIdentifierImpl::getExpandedSystemId();
}

$String* XMLDTDDescription::getNamespace() {
	 return this->$XMLResourceIdentifierImpl::getNamespace();
}

$String* XMLDTDDescription::toString() {
	 return this->$XMLResourceIdentifierImpl::toString();
}

$Object* XMLDTDDescription::clone() {
	 return this->$XMLResourceIdentifierImpl::clone();
}

void XMLDTDDescription::finalize() {
	this->$XMLResourceIdentifierImpl::finalize();
}

void XMLDTDDescription::init$($XMLResourceIdentifier* id, $String* rootName) {
	$useLocalCurrentObjectStackCache();
	$XMLResourceIdentifierImpl::init$();
	$set(this, fRootName, nullptr);
	$set(this, fPossibleRoots, nullptr);
	$var($String, var$0, $nc(id)->getPublicId());
	$var($String, var$1, id->getLiteralSystemId());
	$var($String, var$2, id->getBaseSystemId());
	this->setValues(var$0, var$1, var$2, $(id->getExpandedSystemId()));
	$set(this, fRootName, rootName);
	$set(this, fPossibleRoots, nullptr);
}

void XMLDTDDescription::init$($String* publicId, $String* literalId, $String* baseId, $String* expandedId, $String* rootName) {
	$XMLResourceIdentifierImpl::init$();
	$set(this, fRootName, nullptr);
	$set(this, fPossibleRoots, nullptr);
	this->setValues(publicId, literalId, baseId, expandedId);
	$set(this, fRootName, rootName);
	$set(this, fPossibleRoots, nullptr);
}

void XMLDTDDescription::init$($XMLInputSource* source) {
	$useLocalCurrentObjectStackCache();
	$XMLResourceIdentifierImpl::init$();
	$set(this, fRootName, nullptr);
	$set(this, fPossibleRoots, nullptr);
	$var($String, var$0, $nc(source)->getPublicId());
	$var($String, var$1, source->getBaseSystemId());
	this->setValues(var$0, nullptr, var$1, $(source->getSystemId()));
	$set(this, fRootName, nullptr);
	$set(this, fPossibleRoots, nullptr);
}

$String* XMLDTDDescription::getGrammarType() {
	$init($XMLGrammarDescription);
	return $XMLGrammarDescription::XML_DTD;
}

$String* XMLDTDDescription::getRootName() {
	return this->fRootName;
}

void XMLDTDDescription::setRootName($String* rootName) {
	$set(this, fRootName, rootName);
	$set(this, fPossibleRoots, nullptr);
}

void XMLDTDDescription::setPossibleRoots($List* possibleRoots) {
	$set(this, fPossibleRoots, possibleRoots);
}

bool XMLDTDDescription::equals(Object$* desc) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($XMLGrammarDescription, desc))) {
		return false;
	}
	if (!$nc($(getGrammarType()))->equals($($nc(($cast($XMLGrammarDescription, desc)))->getGrammarType()))) {
		return false;
	}
	$var(XMLDTDDescription, dtdDesc, $cast(XMLDTDDescription, desc));
	if (this->fRootName != nullptr) {
		if (($nc(dtdDesc)->fRootName) != nullptr && !$nc(dtdDesc->fRootName)->equals(this->fRootName)) {
			return false;
		} else if (dtdDesc->fPossibleRoots != nullptr && !$nc(dtdDesc->fPossibleRoots)->contains(this->fRootName)) {
			return false;
		}
	} else if (this->fPossibleRoots != nullptr) {
		if ($nc(dtdDesc)->fRootName != nullptr) {
			if (!$nc(this->fPossibleRoots)->contains(dtdDesc->fRootName)) {
				return false;
			}
		} else if (dtdDesc->fPossibleRoots == nullptr) {
			return false;
		} else {
			bool found = false;
			{
				$var($Iterator, i$, $nc(this->fPossibleRoots)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, root, $cast($String, i$->next()));
					{
						found = $nc(dtdDesc->fPossibleRoots)->contains(root);
						if (found) {
							break;
						}
					}
				}
			}
			if (!found) {
				return false;
			}
		}
	}
	if (this->fExpandedSystemId != nullptr) {
		if (!$nc(this->fExpandedSystemId)->equals($nc(dtdDesc)->fExpandedSystemId)) {
			return false;
		}
	} else if ($nc(dtdDesc)->fExpandedSystemId != nullptr) {
		return false;
	}
	if (this->fPublicId != nullptr) {
		if (!$nc(this->fPublicId)->equals($nc(dtdDesc)->fPublicId)) {
			return false;
		}
	} else if ($nc(dtdDesc)->fPublicId != nullptr) {
		return false;
	}
	return true;
}

int32_t XMLDTDDescription::hashCode() {
	if (this->fExpandedSystemId != nullptr) {
		return $nc(this->fExpandedSystemId)->hashCode();
	}
	if (this->fPublicId != nullptr) {
		return $nc(this->fPublicId)->hashCode();
	}
	return 0;
}

XMLDTDDescription::XMLDTDDescription() {
}

$Class* XMLDTDDescription::load$($String* name, bool initialize) {
	$loadClass(XMLDTDDescription, name, initialize, &_XMLDTDDescription_ClassInfo_, allocate$XMLDTDDescription);
	return class$;
}

$Class* XMLDTDDescription::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com