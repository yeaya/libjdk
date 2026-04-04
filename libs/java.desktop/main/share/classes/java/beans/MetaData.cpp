#include <java/beans/MetaData.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/ConstructorProperties.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/MetaData$1.h>
#include <java/beans/MetaData$ArrayPersistenceDelegate.h>
#include <java/beans/MetaData$EnumPersistenceDelegate.h>
#include <java/beans/MetaData$NullPersistenceDelegate.h>
#include <java/beans/MetaData$PrimitivePersistenceDelegate.h>
#include <java/beans/MetaData$ProxyPersistenceDelegate.h>
#include <java/beans/MetaData$java_awt_AWTKeyStroke_PersistenceDelegate.h>
#include <java/beans/MetaData$java_awt_Font_PersistenceDelegate.h>
#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>
#include <java/beans/MetaData$javax_swing_border_MatteBorder_PersistenceDelegate.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/beans/XMLEncoder.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Proxy.h>
#include <java/security/AccessController.h>
#include <java/util/Collections.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ConstructorProperties = ::java::beans::ConstructorProperties;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $MetaData$1 = ::java::beans::MetaData$1;
using $MetaData$ArrayPersistenceDelegate = ::java::beans::MetaData$ArrayPersistenceDelegate;
using $MetaData$EnumPersistenceDelegate = ::java::beans::MetaData$EnumPersistenceDelegate;
using $MetaData$NullPersistenceDelegate = ::java::beans::MetaData$NullPersistenceDelegate;
using $MetaData$PrimitivePersistenceDelegate = ::java::beans::MetaData$PrimitivePersistenceDelegate;
using $MetaData$ProxyPersistenceDelegate = ::java::beans::MetaData$ProxyPersistenceDelegate;
using $MetaData$java_awt_AWTKeyStroke_PersistenceDelegate = ::java::beans::MetaData$java_awt_AWTKeyStroke_PersistenceDelegate;
using $MetaData$java_awt_Font_PersistenceDelegate = ::java::beans::MetaData$java_awt_Font_PersistenceDelegate;
using $MetaData$java_util_Date_PersistenceDelegate = ::java::beans::MetaData$java_util_Date_PersistenceDelegate;
using $MetaData$javax_swing_border_MatteBorder_PersistenceDelegate = ::java::beans::MetaData$javax_swing_border_MatteBorder_PersistenceDelegate;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $XMLEncoder = ::java::beans::XMLEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Proxy = ::java::lang::reflect::Proxy;
using $AccessController = ::java::security::AccessController;
using $Collections = ::java::util::Collections;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace beans {

$Map* MetaData::fields = nullptr;
$Hashtable* MetaData::internalPersistenceDelegates = nullptr;
$PersistenceDelegate* MetaData::nullPersistenceDelegate = nullptr;
$PersistenceDelegate* MetaData::enumPersistenceDelegate = nullptr;
$PersistenceDelegate* MetaData::primitivePersistenceDelegate = nullptr;
$PersistenceDelegate* MetaData::defaultPersistenceDelegate = nullptr;
$PersistenceDelegate* MetaData::arrayPersistenceDelegate = nullptr;
$PersistenceDelegate* MetaData::proxyPersistenceDelegate = nullptr;

void MetaData::init$() {
}

$PersistenceDelegate* MetaData::getPersistenceDelegate($Class* type) {
	$init(MetaData);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		if (type == nullptr) {
			return MetaData::nullPersistenceDelegate;
		}
		if ($Enum::class$->isAssignableFrom(type)) {
			return MetaData::enumPersistenceDelegate;
		}
		if (nullptr != $XMLEncoder::primitiveTypeFor(type)) {
			return MetaData::primitivePersistenceDelegate;
		}
		if ($nc(type)->isArray()) {
			if (MetaData::arrayPersistenceDelegate == nullptr) {
				$assignStatic(MetaData::arrayPersistenceDelegate, $new($MetaData$ArrayPersistenceDelegate));
			}
			return MetaData::arrayPersistenceDelegate;
		}
		try {
			if ($Proxy::isProxyClass(type)) {
				if (MetaData::proxyPersistenceDelegate == nullptr) {
					$assignStatic(MetaData::proxyPersistenceDelegate, $new($MetaData$ProxyPersistenceDelegate));
				}
				return MetaData::proxyPersistenceDelegate;
			}
		} catch ($Exception& e) {
		}
		$var($String, typeName, type->getName());
		$var($PersistenceDelegate, pd, $cast($PersistenceDelegate, getBeanAttribute(type, "persistenceDelegate"_s)));
		if (pd == nullptr) {
			$assign(pd, $cast($PersistenceDelegate, $nc(MetaData::internalPersistenceDelegates)->get(typeName)));
			if (pd != nullptr) {
				return pd;
			}
			MetaData::internalPersistenceDelegates->put(typeName, MetaData::defaultPersistenceDelegate);
			try {
				$var($String, name, type->getName());
				$Class* c = $Class::forName($$str({"java.beans.MetaData$"_s, $($nc(name)->replace(u'.', u'_')), "_PersistenceDelegate"_s}));
				$assign(pd, $cast($PersistenceDelegate, c->newInstance()));
				MetaData::internalPersistenceDelegates->put(typeName, pd);
			} catch ($ClassNotFoundException& e) {
				$var($StringArray, properties, getConstructorProperties(type));
				if (properties != nullptr) {
					$assign(pd, $new($DefaultPersistenceDelegate, properties));
					$nc(MetaData::internalPersistenceDelegates)->put(typeName, pd);
				}
			} catch ($Exception& e) {
				$nc($System::err)->println($$str({"Internal error: "_s, e}));
			}
		}
		return (pd != nullptr) ? pd : MetaData::defaultPersistenceDelegate;
	}
}

$StringArray* MetaData::getConstructorProperties($Class* type) {
	$init(MetaData);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($StringArray, names, nullptr);
	int32_t length = 0;
	{
		$var($ConstructorArray, arr$, $nc(type)->getConstructors());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Constructor, constructor, arr$->get(i$));
			{
				$var($StringArray, value, getAnnotationValue(constructor));
				if ((value != nullptr) && (length < value->length) && isValid(constructor, value)) {
					$assign(names, value);
					length = value->length;
				}
			}
		}
	}
	return names;
}

$StringArray* MetaData::getAnnotationValue($Constructor* constructor) {
	$init(MetaData);
	$load($ConstructorProperties);
	$var($ConstructorProperties, annotation, $cast($ConstructorProperties, $nc(constructor)->getAnnotation($ConstructorProperties::class$)));
	return (annotation != nullptr) ? annotation->value() : ($StringArray*)nullptr;
}

bool MetaData::isValid($Constructor* constructor, $StringArray* names) {
	$init(MetaData);
	$useLocalObjectStack();
	$var($ClassArray, parameters, $nc(constructor)->getParameterTypes());
	if ($nc(names)->length != $nc(parameters)->length) {
		return false;
	}
	{
		$var($StringArray, arr$, names);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			if (name == nullptr) {
				return false;
			}
		}
	}
	return true;
}

$Object* MetaData::getBeanAttribute($Class* type, $String* attribute) {
	$init(MetaData);
	$useLocalObjectStack();
	try {
		return $$nc($$nc($Introspector::getBeanInfo(type))->getBeanDescriptor())->getValue(attribute);
	} catch ($IntrospectionException& exception) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Object* MetaData::getPrivateFieldValue(Object$* instance, $String* name) {
	$init(MetaData);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Field, field, $cast($Field, $nc(MetaData::fields)->get(name)));
	if (field == nullptr) {
		int32_t index = $nc(name)->lastIndexOf(u'.');
		$var($String, className, name->substring(0, index));
		$var($String, fieldName, name->substring(1 + index));
		$assign(field, $cast($Field, $AccessController::doPrivileged($$new($MetaData$1, className, fieldName))));
		MetaData::fields->put(name, field);
	}
	try {
		return $nc(field)->get(instance);
	} catch ($IllegalAccessException& exception) {
		$throwNew($IllegalStateException, "Could not get value of the field"_s, exception);
	}
	$shouldNotReachHere();
}

void MetaData::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MetaData::fields, $Collections::synchronizedMap($$new($WeakHashMap)));
	$assignStatic(MetaData::internalPersistenceDelegates, $new($Hashtable));
	$assignStatic(MetaData::nullPersistenceDelegate, $new($MetaData$NullPersistenceDelegate));
	$assignStatic(MetaData::enumPersistenceDelegate, $new($MetaData$EnumPersistenceDelegate));
	$assignStatic(MetaData::primitivePersistenceDelegate, $new($MetaData$PrimitivePersistenceDelegate));
	$assignStatic(MetaData::defaultPersistenceDelegate, $new($DefaultPersistenceDelegate));
	{
		MetaData::internalPersistenceDelegates->put("java.net.URI"_s, $$new($MetaData$PrimitivePersistenceDelegate));
		MetaData::internalPersistenceDelegates->put("javax.swing.plaf.BorderUIResource$MatteBorderUIResource"_s, $$new($MetaData$javax_swing_border_MatteBorder_PersistenceDelegate));
		MetaData::internalPersistenceDelegates->put("javax.swing.plaf.FontUIResource"_s, $$new($MetaData$java_awt_Font_PersistenceDelegate));
		MetaData::internalPersistenceDelegates->put("javax.swing.KeyStroke"_s, $$new($MetaData$java_awt_AWTKeyStroke_PersistenceDelegate));
		MetaData::internalPersistenceDelegates->put("java.sql.Date"_s, $$new($MetaData$java_util_Date_PersistenceDelegate));
		MetaData::internalPersistenceDelegates->put("java.sql.Time"_s, $$new($MetaData$java_util_Date_PersistenceDelegate));
	}
}

MetaData::MetaData() {
}

$Class* MetaData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fields", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Field;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MetaData, fields)},
		{"internalPersistenceDelegates", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PersistenceDelegate;>;", $PRIVATE | $STATIC, $staticField(MetaData, internalPersistenceDelegates)},
		{"nullPersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, nullPersistenceDelegate)},
		{"enumPersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, enumPersistenceDelegate)},
		{"primitivePersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, primitivePersistenceDelegate)},
		{"defaultPersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, defaultPersistenceDelegate)},
		{"arrayPersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, arrayPersistenceDelegate)},
		{"proxyPersistenceDelegate", "Ljava/beans/PersistenceDelegate;", nullptr, $PRIVATE | $STATIC, $staticField(MetaData, proxyPersistenceDelegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData, init$, void)},
		{"getAnnotationValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(MetaData, getAnnotationValue, $StringArray*, $Constructor*)},
		{"getBeanAttribute", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(MetaData, getBeanAttribute, $Object*, $Class*, $String*)},
		{"getConstructorProperties", "(Ljava/lang/Class;)[Ljava/lang/String;", "(Ljava/lang/Class<*>;)[Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(MetaData, getConstructorProperties, $StringArray*, $Class*)},
		{"getPersistenceDelegate", "(Ljava/lang/Class;)Ljava/beans/PersistenceDelegate;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(MetaData, getPersistenceDelegate, $PersistenceDelegate*, $Class*)},
		{"getPrivateFieldValue", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(MetaData, getPrivateFieldValue, $Object*, Object$*, $String*)},
		{"isValid", "(Ljava/lang/reflect/Constructor;[Ljava/lang/String;)Z", "(Ljava/lang/reflect/Constructor<*>;[Ljava/lang/String;)Z", $PRIVATE | $STATIC, $staticMethod(MetaData, isValid, bool, $Constructor*, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate", "java.beans.MetaData", "sun_swing_PrintColorUIResource_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate", "java.beans.MetaData", "javax_swing_border_MatteBorder_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JMenu_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_Box_PersistenceDelegate", "java.beans.MetaData", "javax_swing_Box_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_JTabbedPane_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JTabbedPane_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_ToolTipManager_PersistenceDelegate", "java.beans.MetaData", "javax_swing_ToolTipManager_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate", "java.beans.MetaData", "javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate", "java.beans.MetaData", "javax_swing_DefaultComboBoxModel_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_DefaultListModel_PersistenceDelegate", "java.beans.MetaData", "javax_swing_DefaultListModel_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$javax_swing_JFrame_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JFrame_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_GridBagLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_GridBagLayout_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_CardLayout_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_BorderLayout_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_List_PersistenceDelegate", "java.beans.MetaData", "java_awt_List_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_MenuBar_PersistenceDelegate", "java.beans.MetaData", "java_awt_MenuBar_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Menu_PersistenceDelegate", "java.beans.MetaData", "java_awt_Menu_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Choice_PersistenceDelegate", "java.beans.MetaData", "java_awt_Choice_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Container_PersistenceDelegate", "java.beans.MetaData", "java_awt_Container_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Component_PersistenceDelegate", "java.beans.MetaData", "java_awt_Component_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate", "java.beans.MetaData", "java_awt_MenuShortcut_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_font_TextAttribute_PersistenceDelegate", "java.beans.MetaData", "java_awt_font_TextAttribute_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_SystemColor_PersistenceDelegate", "java.beans.MetaData", "java_awt_SystemColor_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$StaticFieldsPersistenceDelegate", "java.beans.MetaData", "StaticFieldsPersistenceDelegate", $STATIC},
		{"java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate", "java.beans.MetaData", "java_awt_AWTKeyStroke_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Font_PersistenceDelegate", "java.beans.MetaData", "java_awt_Font_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_awt_Insets_PersistenceDelegate", "java.beans.MetaData", "java_awt_Insets_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_beans_beancontext_BeanContextSupport_PersistenceDelegate", "java.beans.MetaData", "java_beans_beancontext_BeanContextSupport_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_Hashtable_PersistenceDelegate", "java.beans.MetaData", "java_util_Hashtable_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_AbstractMap_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractMap_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_AbstractList_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractList_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_AbstractCollection_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractCollection_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_Map_PersistenceDelegate", "java.beans.MetaData", "java_util_Map_PersistenceDelegate", $STATIC},
		{"java.beans.MetaData$java_util_List_PersistenceDelegate", "java.beans.MetaData", "java_util_List_PersistenceDelegate", $STATIC},
		{"java.beans.MetaData$java_util_Collection_PersistenceDelegate", "java.beans.MetaData", "java_util_Collection_PersistenceDelegate", $STATIC},
		{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate", "java.beans.MetaData", "java_sql_Timestamp_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_Date_PersistenceDelegate", "java.beans.MetaData", "java_util_Date_PersistenceDelegate", $STATIC},
		{"java.beans.MetaData$java_lang_reflect_Method_PersistenceDelegate", "java.beans.MetaData", "java_lang_reflect_Method_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate", "java.beans.MetaData", "java_lang_reflect_Field_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_lang_Class_PersistenceDelegate", "java.beans.MetaData", "java_lang_Class_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_lang_String_PersistenceDelegate", "java.beans.MetaData", "java_lang_String_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$ProxyPersistenceDelegate", "java.beans.MetaData", "ProxyPersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$ArrayPersistenceDelegate", "java.beans.MetaData", "ArrayPersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$PrimitivePersistenceDelegate", "java.beans.MetaData", "PrimitivePersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$EnumPersistenceDelegate", "java.beans.MetaData", "EnumPersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$NullPersistenceDelegate", "java.beans.MetaData", "NullPersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.MetaData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate,java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate,java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate,java.beans.MetaData$javax_swing_Box_PersistenceDelegate,java.beans.MetaData$javax_swing_JTabbedPane_PersistenceDelegate,java.beans.MetaData$javax_swing_ToolTipManager_PersistenceDelegate,java.beans.MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate,java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate,java.beans.MetaData$javax_swing_DefaultListModel_PersistenceDelegate,java.beans.MetaData$javax_swing_JFrame_PersistenceDelegate,java.beans.MetaData$java_awt_GridBagLayout_PersistenceDelegate,java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate,java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate,java.beans.MetaData$java_awt_List_PersistenceDelegate,java.beans.MetaData$java_awt_MenuBar_PersistenceDelegate,java.beans.MetaData$java_awt_Menu_PersistenceDelegate,java.beans.MetaData$java_awt_Choice_PersistenceDelegate,java.beans.MetaData$java_awt_Container_PersistenceDelegate,java.beans.MetaData$java_awt_Component_PersistenceDelegate,java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate,java.beans.MetaData$java_awt_font_TextAttribute_PersistenceDelegate,java.beans.MetaData$java_awt_SystemColor_PersistenceDelegate,java.beans.MetaData$StaticFieldsPersistenceDelegate,java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate,java.beans.MetaData$java_awt_Font_PersistenceDelegate,java.beans.MetaData$java_awt_Insets_PersistenceDelegate,java.beans.MetaData$java_beans_beancontext_BeanContextSupport_PersistenceDelegate,java.beans.MetaData$java_util_Hashtable_PersistenceDelegate,java.beans.MetaData$java_util_AbstractMap_PersistenceDelegate,java.beans.MetaData$java_util_AbstractList_PersistenceDelegate,java.beans.MetaData$java_util_AbstractCollection_PersistenceDelegate,java.beans.MetaData$java_util_Map_PersistenceDelegate,java.beans.MetaData$java_util_List_PersistenceDelegate,java.beans.MetaData$java_util_Collection_PersistenceDelegate,java.beans.MetaData$java_util_Collections,java.beans.MetaData$java_util_Collections$SynchronizedSortedMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedSortedSet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedSet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedRandomAccessList_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedList_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SynchronizedCollection_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableSortedMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableSet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableRandomAccessList_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableList_PersistenceDelegate,java.beans.MetaData$java_util_Collections$UnmodifiableCollection_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SingletonMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SingletonSet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$SingletonList_PersistenceDelegate,java.beans.MetaData$java_util_Collections$EmptyMap_PersistenceDelegate,java.beans.MetaData$java_util_Collections$EmptySet_PersistenceDelegate,java.beans.MetaData$java_util_Collections$EmptyList_PersistenceDelegate,java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate,java.beans.MetaData$java_util_Date_PersistenceDelegate,java.beans.MetaData$java_lang_reflect_Method_PersistenceDelegate,java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate,java.beans.MetaData$java_lang_Class_PersistenceDelegate,java.beans.MetaData$java_lang_String_PersistenceDelegate,java.beans.MetaData$ProxyPersistenceDelegate,java.beans.MetaData$ArrayPersistenceDelegate,java.beans.MetaData$PrimitivePersistenceDelegate,java.beans.MetaData$EnumPersistenceDelegate,java.beans.MetaData$NullPersistenceDelegate,java.beans.MetaData$1"
	};
	$loadClass(MetaData, name, initialize, &classInfo$$, MetaData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData);
	});
	return class$;
}

$Class* MetaData::class$ = nullptr;

	} // beans
} // java