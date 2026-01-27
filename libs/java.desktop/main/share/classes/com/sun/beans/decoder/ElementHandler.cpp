#include <com/sun/beans/decoder/ElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _ElementHandler_FieldInfo_[] = {
	{"owner", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PRIVATE, $field(ElementHandler, owner)},
	{"parent", "Lcom/sun/beans/decoder/ElementHandler;", nullptr, $PRIVATE, $field(ElementHandler, parent)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ElementHandler, id)},
	{}
};

$MethodInfo _ElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ElementHandler, init$, void)},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(ElementHandler, addArgument, void, Object$*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementHandler, addAttribute, void, $String*, $String*)},
	{"addCharacter", "(C)V", nullptr, $PUBLIC, $virtualMethod(ElementHandler, addCharacter, void, char16_t)},
	{"endElement", "()V", nullptr, $PUBLIC, $virtualMethod(ElementHandler, endElement, void)},
	{"getContextBean", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(ElementHandler, getContextBean, $Object*)},
	{"getOwner", "()Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PUBLIC | $FINAL, $method(ElementHandler, getOwner, $DocumentHandler*)},
	{"getParent", "()Lcom/sun/beans/decoder/ElementHandler;", nullptr, $PUBLIC | $FINAL, $method(ElementHandler, getParent, ElementHandler*)},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ElementHandler, getValueObject, $ValueObject*)},
	{"getVariable", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(ElementHandler, getVariable, $Object*, $String*)},
	{"isArgument", "()Z", nullptr, $PROTECTED, $virtualMethod(ElementHandler, isArgument, bool)},
	{"setOwner", "(Lcom/sun/beans/decoder/DocumentHandler;)V", nullptr, $FINAL, $method(ElementHandler, setOwner, void, $DocumentHandler*)},
	{"setParent", "(Lcom/sun/beans/decoder/ElementHandler;)V", nullptr, $FINAL, $method(ElementHandler, setParent, void, ElementHandler*)},
	{"startElement", "()V", nullptr, $PUBLIC, $virtualMethod(ElementHandler, startElement, void)},
	{}
};

$ClassInfo _ElementHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.beans.decoder.ElementHandler",
	"java.lang.Object",
	nullptr,
	_ElementHandler_FieldInfo_,
	_ElementHandler_MethodInfo_
};

$Object* allocate$ElementHandler($Class* clazz) {
	return $of($alloc(ElementHandler));
}

void ElementHandler::init$() {
}

$DocumentHandler* ElementHandler::getOwner() {
	return this->owner;
}

void ElementHandler::setOwner($DocumentHandler* owner) {
	if (owner == nullptr) {
		$throwNew($IllegalArgumentException, "Every element should have owner"_s);
	}
	$set(this, owner, owner);
}

ElementHandler* ElementHandler::getParent() {
	return this->parent;
}

void ElementHandler::setParent(ElementHandler* parent) {
	$set(this, parent, parent);
}

$Object* ElementHandler::getVariable($String* id) {
	if ($nc(id)->equals(this->id)) {
		$var($ValueObject, value, getValueObject());
		if ($nc(value)->isVoid()) {
			$throwNew($IllegalStateException, "The element does not return value"_s);
		}
		return $of($nc(value)->getValue());
	}
	return $of((this->parent != nullptr) ? $nc(this->parent)->getVariable(id) : $nc(this->owner)->getVariable(id));
}

$Object* ElementHandler::getContextBean() {
	$useLocalCurrentObjectStackCache();
	if (this->parent != nullptr) {
		$var($ValueObject, value, $nc(this->parent)->getValueObject());
		if (!$nc(value)->isVoid()) {
			return $of(value->getValue());
		}
		$throwNew($IllegalStateException, "The outer element does not return value"_s);
	} else {
		$var($Object, value, $nc(this->owner)->getOwner());
		if (value != nullptr) {
			return $of(value);
		}
		$throwNew($IllegalStateException, "The topmost element does not have context"_s);
	}
}

void ElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("id"_s)) {
		$set(this, id, value);
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unsupported attribute: "_s, name}));
	}
}

void ElementHandler::startElement() {
}

void ElementHandler::endElement() {
	$useLocalCurrentObjectStackCache();
	$var($ValueObject, value, getValueObject());
	if (!$nc(value)->isVoid()) {
		if (this->id != nullptr) {
			$nc(this->owner)->setVariable(this->id, $(value->getValue()));
		}
		if (isArgument()) {
			if (this->parent != nullptr) {
				$nc(this->parent)->addArgument($(value->getValue()));
			} else {
				$nc(this->owner)->addObject($(value->getValue()));
			}
		}
	}
}

void ElementHandler::addCharacter(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	if ((ch != u' ') && (ch != u'\n') && (ch != u'\t') && (ch != u'\r')) {
		$throwNew($IllegalStateException, $$str({"Illegal character with code "_s, $$str((int32_t)ch)}));
	}
}

void ElementHandler::addArgument(Object$* argument) {
	$throwNew($IllegalStateException, "Could not add argument to simple element"_s);
}

bool ElementHandler::isArgument() {
	return this->id == nullptr;
}

ElementHandler::ElementHandler() {
}

$Class* ElementHandler::load$($String* name, bool initialize) {
	$loadClass(ElementHandler, name, initialize, &_ElementHandler_ClassInfo_, allocate$ElementHandler);
	return class$;
}

$Class* ElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com