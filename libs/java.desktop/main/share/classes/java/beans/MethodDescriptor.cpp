#include <java/beans/MethodDescriptor.h>
#include <java/beans/FeatureDescriptor.h>
#include <java/beans/Introspector.h>
#include <java/beans/MethodRef.h>
#include <java/beans/ParameterDescriptor.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ParameterDescriptorArray = $Array<::java::beans::ParameterDescriptor>;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $Introspector = ::java::beans::Introspector;
using $MethodRef = ::java::beans::MethodRef;
using $ParameterDescriptor = ::java::beans::ParameterDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Method = ::java::lang::reflect::Method;
using $ArrayList = ::java::util::ArrayList;

namespace java {
	namespace beans {

void MethodDescriptor::init$($Method* method) {
	MethodDescriptor::init$(method, nullptr);
}

void MethodDescriptor::init$($Method* method, $ParameterDescriptorArray* parameterDescriptors) {
	$FeatureDescriptor::init$();
	$set(this, methodRef, $new($MethodRef));
	setName($($nc(method)->getName()));
	setMethod(method);
	$set(this, parameterDescriptors, (parameterDescriptors != nullptr) ? $cast($ParameterDescriptorArray, parameterDescriptors->clone()) : ($ParameterDescriptorArray*)nullptr);
}

$Method* MethodDescriptor::getMethod() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Method, method, $nc(this->methodRef)->get());
		if (method == nullptr) {
			$Class* cls = getClass0();
			$var($String, name, getName());
			if ((cls != nullptr) && (name != nullptr)) {
				$var($ClassArray, params, getParams());
				if (params == nullptr) {
					for (int32_t i = 0; i < 3; ++i) {
						$assign(method, $Introspector::findMethod(cls, name, i, nullptr));
						if (method != nullptr) {
							break;
						}
					}
				} else {
					$assign(method, $Introspector::findMethod(cls, name, params->length, params));
				}
				setMethod(method);
			}
		}
		return method;
	}
}

void MethodDescriptor::setMethod($Method* method) {
	$synchronized(this) {
		if (method == nullptr) {
			return;
		}
		if (getClass0() == nullptr) {
			setClass0($nc(method)->getDeclaringClass());
		}
		setParams($(getParameterTypes(getClass0(), method)));
		$nc(this->methodRef)->set(method);
	}
}

void MethodDescriptor::setParams($ClassArray* param) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (param == nullptr) {
			return;
		}
		$set(this, paramNames, $new($StringArray, $nc(param)->length));
		$set(this, params, $new($ArrayList, param->length));
		for (int32_t i = 0; i < param->length; ++i) {
			this->paramNames->set(i, $($nc(param->get(i))->getName()));
			this->params->add($$new($WeakReference, param->get(i)));
		}
	}
}

$StringArray* MethodDescriptor::getParamNames() {
	return this->paramNames;
}

$ClassArray* MethodDescriptor::getParams() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($ClassArray, clss, $new($ClassArray, $nc(this->params)->size()));
		for (int32_t i = 0; i < $nc(this->params)->size(); ++i) {
			$var($Reference, ref, $cast($Reference, this->params->get(i)));
			$Class* cls = $cast($Class, $nc(ref)->get());
			if (cls == nullptr) {
				return nullptr;
			} else {
				clss->set(i, cls);
			}
		}
		return clss;
	}
}

$ParameterDescriptorArray* MethodDescriptor::getParameterDescriptors() {
	return (this->parameterDescriptors != nullptr) ? $cast($ParameterDescriptorArray, this->parameterDescriptors->clone()) : ($ParameterDescriptorArray*)nullptr;
}

$Method* MethodDescriptor::resolve($Method* oldMethod, $Method* newMethod) {
	$init(MethodDescriptor);
	if (oldMethod == nullptr) {
		return newMethod;
	}
	if (newMethod == nullptr) {
		return oldMethod;
	}
	bool var$0 = !$nc(oldMethod)->isSynthetic();
	return var$0 && $nc(newMethod)->isSynthetic() ? oldMethod : newMethod;
}

void MethodDescriptor::init$(MethodDescriptor* x, MethodDescriptor* y) {
	$useLocalObjectStack();
	$FeatureDescriptor::init$(x, y);
	$set(this, methodRef, $new($MethodRef));
	$var($Method, var$0, $nc($nc(x)->methodRef)->get());
	$nc(this->methodRef)->set($(resolve(var$0, $($nc($nc(y)->methodRef)->get()))));
	$set(this, params, x->params);
	if (y->params != nullptr) {
		$set(this, params, y->params);
	}
	$set(this, paramNames, x->paramNames);
	if (y->paramNames != nullptr) {
		$set(this, paramNames, y->paramNames);
	}
	$set(this, parameterDescriptors, x->parameterDescriptors);
	if (y->parameterDescriptors != nullptr) {
		$set(this, parameterDescriptors, y->parameterDescriptors);
	}
}

void MethodDescriptor::init$(MethodDescriptor* old) {
	$useLocalObjectStack();
	$FeatureDescriptor::init$(old);
	$set(this, methodRef, $new($MethodRef));
	$nc(this->methodRef)->set($($nc(old)->getMethod()));
	$set(this, params, old->params);
	$set(this, paramNames, old->paramNames);
	if (old->parameterDescriptors != nullptr) {
		int32_t len = old->parameterDescriptors->length;
		$set(this, parameterDescriptors, $new($ParameterDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			this->parameterDescriptors->set(i, $$new($ParameterDescriptor, old->parameterDescriptors->get(i)));
		}
	}
}

void MethodDescriptor::appendTo($StringBuilder* sb) {
	$useLocalObjectStack();
	$FeatureDescriptor::appendTo(sb, "method"_s, $($nc(this->methodRef)->get()));
	if (this->parameterDescriptors != nullptr) {
		$nc(sb)->append("; parameterDescriptors={"_s);
		{
			$var($ParameterDescriptorArray, arr$, this->parameterDescriptors);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($ParameterDescriptor, pd, arr$->get(i$));
				{
					sb->append(pd)->append(", "_s);
				}
			}
		}
		sb->setLength(sb->length() - 2);
		sb->append("}"_s);
	}
}

MethodDescriptor::MethodDescriptor() {
}

$Class* MethodDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(MethodDescriptor, methodRef)},
		{"paramNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodDescriptor, paramNames)},
		{"params", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;>;", $PRIVATE, $field(MethodDescriptor, params)},
		{"parameterDescriptors", "[Ljava/beans/ParameterDescriptor;", nullptr, $PRIVATE, $field(MethodDescriptor, parameterDescriptors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(MethodDescriptor, init$, void, $Method*)},
		{"<init>", "(Ljava/lang/reflect/Method;[Ljava/beans/ParameterDescriptor;)V", nullptr, $PUBLIC, $method(MethodDescriptor, init$, void, $Method*, $ParameterDescriptorArray*)},
		{"<init>", "(Ljava/beans/MethodDescriptor;Ljava/beans/MethodDescriptor;)V", nullptr, 0, $method(MethodDescriptor, init$, void, MethodDescriptor*, MethodDescriptor*)},
		{"<init>", "(Ljava/beans/MethodDescriptor;)V", nullptr, 0, $method(MethodDescriptor, init$, void, MethodDescriptor*)},
		{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(MethodDescriptor, appendTo, void, $StringBuilder*)},
		{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MethodDescriptor, getMethod, $Method*)},
		{"getParamNames", "()[Ljava/lang/String;", nullptr, 0, $virtualMethod(MethodDescriptor, getParamNames, $StringArray*)},
		{"getParameterDescriptors", "()[Ljava/beans/ParameterDescriptor;", nullptr, $PUBLIC, $virtualMethod(MethodDescriptor, getParameterDescriptors, $ParameterDescriptorArray*)},
		{"getParams", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PRIVATE | $SYNCHRONIZED, $method(MethodDescriptor, getParams, $ClassArray*)},
		{"resolve", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodDescriptor, resolve, $Method*, $Method*, $Method*)},
		{"setMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(MethodDescriptor, setMethod, void, $Method*)},
		{"setParams", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $PRIVATE | $SYNCHRONIZED, $method(MethodDescriptor, setParams, void, $ClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.MethodDescriptor",
		"java.beans.FeatureDescriptor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodDescriptor);
	});
	return class$;
}

$Class* MethodDescriptor::class$ = nullptr;

	} // beans
} // java