#include <java/beans/FeatureDescriptor.h>

#include <com/sun/beans/TypeResolver.h>
#include <java/beans/Transient.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TRANSIENT

using $TypeResolver = ::com::sun::beans::TypeResolver;
using $Transient = ::java::beans::Transient;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Method = ::java::lang::reflect::Method;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$FieldInfo _FeatureDescriptor_FieldInfo_[] = {
	{"TRANSIENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FeatureDescriptor, TRANSIENT)},
	{"classRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(FeatureDescriptor, classRef)},
	{"expert", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, expert)},
	{"hidden", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, hidden)},
	{"preferred", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, preferred)},
	{"shortDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, shortDescription)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, name)},
	{"displayName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, displayName)},
	{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(FeatureDescriptor, table)},
	{}
};

$MethodInfo _FeatureDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FeatureDescriptor, init$, void)},
	{"<init>", "(Ljava/beans/FeatureDescriptor;Ljava/beans/FeatureDescriptor;)V", nullptr, 0, $method(FeatureDescriptor, init$, void, FeatureDescriptor*, FeatureDescriptor*)},
	{"<init>", "(Ljava/beans/FeatureDescriptor;)V", nullptr, 0, $method(FeatureDescriptor, init$, void, FeatureDescriptor*)},
	{"addTable", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE, $method(FeatureDescriptor, addTable, void, $Hashtable*)},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(FeatureDescriptor, appendTo, void, $StringBuilder*)},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/ref/Reference;)V", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/ref/Reference<*>;)V", $STATIC, $staticMethod(FeatureDescriptor, appendTo, void, $StringBuilder*, $String*, $Reference*)},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(FeatureDescriptor, appendTo, void, $StringBuilder*, $String*, Object$*)},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Z)V", nullptr, $STATIC, $staticMethod(FeatureDescriptor, appendTo, void, $StringBuilder*, $String*, bool)},
	{"attributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(FeatureDescriptor, attributeNames, $Enumeration*)},
	{"getClass0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(FeatureDescriptor, getClass0, $Class*)},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, getDisplayName, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, getName, $String*)},
	{"getParameterTypes", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)[Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)[Ljava/lang/Class<*>;", $STATIC, $staticMethod(FeatureDescriptor, getParameterTypes, $ClassArray*, $Class*, $Method*)},
	{"getReturnType", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(FeatureDescriptor, getReturnType, $Class*, $Class*, $Method*)},
	{"getShortDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, getShortDescription, $String*)},
	{"getSoftReference", "(Ljava/lang/Object;)Ljava/lang/ref/Reference;", "<T:Ljava/lang/Object;>(TT;)Ljava/lang/ref/Reference<TT;>;", $STATIC, $staticMethod(FeatureDescriptor, getSoftReference, $Reference*, Object$*)},
	{"getTable", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(FeatureDescriptor, getTable, $Hashtable*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, getValue, $Object*, $String*)},
	{"getWeakReference", "(Ljava/lang/Object;)Ljava/lang/ref/Reference;", "<T:Ljava/lang/Object;>(TT;)Ljava/lang/ref/Reference<TT;>;", $STATIC, $staticMethod(FeatureDescriptor, getWeakReference, $Reference*, Object$*)},
	{"isExpert", "()Z", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, isExpert, bool)},
	{"isHidden", "()Z", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, isHidden, bool)},
	{"isPreferred", "()Z", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, isPreferred, bool)},
	{"isTransient", "()Z", nullptr, 0, $virtualMethod(FeatureDescriptor, isTransient, bool)},
	{"setClass0", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $virtualMethod(FeatureDescriptor, setClass0, void, $Class*)},
	{"setDisplayName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setDisplayName, void, $String*)},
	{"setExpert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setExpert, void, bool)},
	{"setHidden", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setHidden, void, bool)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setName, void, $String*)},
	{"setPreferred", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setPreferred, void, bool)},
	{"setShortDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setShortDescription, void, $String*)},
	{"setTransient", "(Ljava/beans/Transient;)V", nullptr, 0, $virtualMethod(FeatureDescriptor, setTransient, void, $Transient*)},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, setValue, void, $String*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FeatureDescriptor, toString, $String*)},
	{}
};

$ClassInfo _FeatureDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.FeatureDescriptor",
	"java.lang.Object",
	nullptr,
	_FeatureDescriptor_FieldInfo_,
	_FeatureDescriptor_MethodInfo_
};

$Object* allocate$FeatureDescriptor($Class* clazz) {
	return $of($alloc(FeatureDescriptor));
}

$String* FeatureDescriptor::TRANSIENT = nullptr;

void FeatureDescriptor::init$() {
}

$String* FeatureDescriptor::getName() {
	return this->name;
}

void FeatureDescriptor::setName($String* name) {
	$set(this, name, name);
}

$String* FeatureDescriptor::getDisplayName() {
	if (this->displayName == nullptr) {
		return getName();
	}
	return this->displayName;
}

void FeatureDescriptor::setDisplayName($String* displayName) {
	$set(this, displayName, displayName);
}

bool FeatureDescriptor::isExpert() {
	return this->expert;
}

void FeatureDescriptor::setExpert(bool expert) {
	this->expert = expert;
}

bool FeatureDescriptor::isHidden() {
	return this->hidden;
}

void FeatureDescriptor::setHidden(bool hidden) {
	this->hidden = hidden;
}

bool FeatureDescriptor::isPreferred() {
	return this->preferred;
}

void FeatureDescriptor::setPreferred(bool preferred) {
	this->preferred = preferred;
}

$String* FeatureDescriptor::getShortDescription() {
	if (this->shortDescription == nullptr) {
		return getDisplayName();
	}
	return this->shortDescription;
}

void FeatureDescriptor::setShortDescription($String* text) {
	$set(this, shortDescription, text);
}

void FeatureDescriptor::setValue($String* attributeName, Object$* value) {
	$nc($(getTable()))->put(attributeName, value);
}

$Object* FeatureDescriptor::getValue($String* attributeName) {
	return $of((this->table != nullptr) ? $nc(this->table)->get(attributeName) : ($Object*)nullptr);
}

$Enumeration* FeatureDescriptor::attributeNames() {
	return $nc($(getTable()))->keys();
}

void FeatureDescriptor::init$(FeatureDescriptor* x, FeatureDescriptor* y) {
	this->expert = $nc(x)->expert | $nc(y)->expert;
	this->hidden = x->hidden | y->hidden;
	this->preferred = x->preferred | y->preferred;
	$set(this, name, y->name);
	$set(this, shortDescription, x->shortDescription);
	if (y->shortDescription != nullptr) {
		$set(this, shortDescription, y->shortDescription);
	}
	$set(this, displayName, x->displayName);
	if (y->displayName != nullptr) {
		$set(this, displayName, y->displayName);
	}
	$set(this, classRef, x->classRef);
	if (y->classRef != nullptr) {
		$set(this, classRef, y->classRef);
	}
	addTable(x->table);
	addTable(y->table);
}

void FeatureDescriptor::init$(FeatureDescriptor* old) {
	this->expert = $nc(old)->expert;
	this->hidden = old->hidden;
	this->preferred = old->preferred;
	$set(this, name, old->name);
	$set(this, shortDescription, old->shortDescription);
	$set(this, displayName, old->displayName);
	$set(this, classRef, old->classRef);
	addTable(old->table);
}

void FeatureDescriptor::addTable($Hashtable* table) {
	if ((table != nullptr) && !table->isEmpty()) {
		$nc($(getTable()))->putAll(table);
	}
}

$Hashtable* FeatureDescriptor::getTable() {
	if (this->table == nullptr) {
		$set(this, table, $new($Hashtable));
	}
	return this->table;
}

void FeatureDescriptor::setTransient($Transient* annotation) {
	if ((annotation != nullptr) && (nullptr == getValue(FeatureDescriptor::TRANSIENT))) {
		setValue(FeatureDescriptor::TRANSIENT, $($Boolean::valueOf(annotation->value())));
	}
}

bool FeatureDescriptor::isTransient() {
	$var($Object, value, getValue(FeatureDescriptor::TRANSIENT));
	return ($instanceOf($Boolean, value)) ? $nc(($cast($Boolean, value)))->booleanValue() : false;
}

void FeatureDescriptor::setClass0($Class* cls) {
	$set(this, classRef, getWeakReference(cls));
}

$Class* FeatureDescriptor::getClass0() {
	return (this->classRef != nullptr) ? $cast($Class, $nc(this->classRef)->get()) : ($Class*)nullptr;
}

$Reference* FeatureDescriptor::getSoftReference(Object$* object) {
	$init(FeatureDescriptor);
	return (object != nullptr) ? static_cast<$Reference*>($new($SoftReference, object)) : ($Reference*)nullptr;
}

$Reference* FeatureDescriptor::getWeakReference(Object$* object) {
	$init(FeatureDescriptor);
	return (object != nullptr) ? static_cast<$Reference*>($new($WeakReference, object)) : ($Reference*)nullptr;
}

$Class* FeatureDescriptor::getReturnType($Class* base, $Method* method) {
	$init(FeatureDescriptor);
	$useLocalCurrentObjectStackCache();
	if (base == nullptr) {
		base = $nc(method)->getDeclaringClass();
	}
	return $TypeResolver::erase($($TypeResolver::resolveInClass(base, $($nc(method)->getGenericReturnType()))));
}

$ClassArray* FeatureDescriptor::getParameterTypes($Class* base, $Method* method) {
	$init(FeatureDescriptor);
	$useLocalCurrentObjectStackCache();
	if (base == nullptr) {
		base = $nc(method)->getDeclaringClass();
	}
	return $TypeResolver::erase($($TypeResolver::resolveInClass(base, $($nc(method)->getGenericParameterTypes()))));
}

$String* FeatureDescriptor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $($of(this)->getClass()->getName())));
	sb->append("[name="_s)->append(this->name);
	appendTo(sb, "displayName"_s, $of(this->displayName));
	appendTo(sb, "shortDescription"_s, $of(this->shortDescription));
	appendTo(sb, "preferred"_s, this->preferred);
	appendTo(sb, "hidden"_s, this->hidden);
	appendTo(sb, "expert"_s, this->expert);
	if ((this->table != nullptr) && !$nc(this->table)->isEmpty()) {
		sb->append("; values={"_s);
		{
			$var($Iterator, i$, $nc($($nc(this->table)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					sb->append($cast($String, $($nc(entry)->getKey())))->append("="_s)->append($($nc(entry)->getValue()))->append("; "_s);
				}
			}
		}
		sb->setLength(sb->length() - 2);
		sb->append("}"_s);
	}
	appendTo(sb);
	return sb->append("]"_s)->toString();
}

void FeatureDescriptor::appendTo($StringBuilder* sb) {
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, $Reference* reference) {
	$init(FeatureDescriptor);
	if (reference != nullptr) {
		appendTo(sb, name, $(reference->get()));
	}
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, Object$* value) {
	$init(FeatureDescriptor);
	if (value != nullptr) {
		$nc(sb)->append("; "_s)->append(name)->append("="_s)->append(value);
	}
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, bool value) {
	$init(FeatureDescriptor);
	if (value) {
		$nc(sb)->append("; "_s)->append(name);
	}
}

FeatureDescriptor::FeatureDescriptor() {
}

void clinit$FeatureDescriptor($Class* class$) {
	$assignStatic(FeatureDescriptor::TRANSIENT, "transient"_s);
}

$Class* FeatureDescriptor::load$($String* name, bool initialize) {
	$loadClass(FeatureDescriptor, name, initialize, &_FeatureDescriptor_ClassInfo_, clinit$FeatureDescriptor, allocate$FeatureDescriptor);
	return class$;
}

$Class* FeatureDescriptor::class$ = nullptr;

	} // beans
} // java