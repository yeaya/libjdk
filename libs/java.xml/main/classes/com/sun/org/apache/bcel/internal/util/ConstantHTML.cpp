#include <com/sun/org/apache/bcel/internal/util/ConstantHTML.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFieldref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/util/Class2HTML.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantFieldref = ::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref;
using $ConstantInterfaceMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref;
using $ConstantMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Class2HTML = ::com::sun::org::apache::bcel::internal::util::Class2HTML;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _ConstantHTML_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, className)},
	{"classPackage", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, classPackage)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, constantPool)},
	{"file", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, file)},
	{"constantRef", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, constantRef)},
	{"constants", "[Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, constants)},
	{"methods", "[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PRIVATE | $FINAL, $field(ConstantHTML, methods)},
	{}
};

$MethodInfo _ConstantHTML_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Lcom/sun/org/apache/bcel/internal/classfile/Method;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ConstantHTML, init$, void, $String*, $String*, $String*, $MethodArray*, $ConstantPool*), "java.io.IOException"},
	{"getMethodNumber", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(ConstantHTML, getMethodNumber, int32_t, $String*)},
	{"referenceConstant", "(I)Ljava/lang/String;", nullptr, 0, $method(ConstantHTML, referenceConstant, $String*, int32_t)},
	{"writeConstant", "(I)V", nullptr, $PRIVATE, $method(ConstantHTML, writeConstant, void, int32_t)},
	{}
};

$ClassInfo _ConstantHTML_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ConstantHTML",
	"java.lang.Object",
	nullptr,
	_ConstantHTML_FieldInfo_,
	_ConstantHTML_MethodInfo_
};

$Object* allocate$ConstantHTML($Class* clazz) {
	return $of($alloc(ConstantHTML));
}

void ConstantHTML::init$($String* dir, $String* class_name, $String* class_package, $MethodArray* methods, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$set(this, className, class_name);
	$set(this, classPackage, class_package);
	$set(this, constantPool, constant_pool);
	$set(this, methods, methods);
	$set(this, constants, $nc(constant_pool)->getConstantPool());
	$set(this, file, $new($PrintWriter, static_cast<$OutputStream*>($$new($FileOutputStream, $$str({dir, class_name, "_cp.html"_s})))));
	$set(this, constantRef, $new($StringArray, $nc(this->constants)->length));
	$nc(this->constantRef)->set(0, "&lt;unknown&gt;"_s);
	$nc(this->file)->println("<HTML><BODY BGCOLOR=\"#C0C0C0\"><TABLE BORDER=0>"_s);
	for (int32_t i = 1; i < $nc(this->constants)->length; ++i) {
		if (i % 2 == 0) {
			$nc(this->file)->print("<TR BGCOLOR=\"#C0C0C0\"><TD>"_s);
		} else {
			$nc(this->file)->print("<TR BGCOLOR=\"#A0A0A0\"><TD>"_s);
		}
		if ($nc(this->constants)->get(i) != nullptr) {
			writeConstant(i);
		}
		$nc(this->file)->print("</TD></TR>\n"_s);
	}
	$nc(this->file)->println("</TABLE></BODY></HTML>"_s);
	$nc(this->file)->close();
}

$String* ConstantHTML::referenceConstant(int32_t index) {
	return $nc(this->constantRef)->get(index);
}

void ConstantHTML::writeConstant(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int8_t tag = $nc($nc(this->constants)->get(index))->getTag();
	int32_t class_index = 0;
	int32_t name_index = 0;
	$var($String, ref, nullptr);
	$nc(this->file)->println($$str({"<H4> <A NAME=cp"_s, $$str(index), ">"_s, $$str(index), "</A> "_s, $($Const::getConstantName(tag)), "</H4>"_s}));
	{
		$var($String, method_name, nullptr)
		$var($String, html_method_name, nullptr)
		$var($String, method_class, nullptr)
		$var($String, short_method_class, nullptr)
		$var($ConstantNameAndType, c2, nullptr)
		$var($String, signature, nullptr)
		$var($StringArray, args, nullptr)
		$var($String, type, nullptr)
		$var($String, ret_type, nullptr)
		$var($StringBuilder, buf, nullptr)
		$var($String, arg_types, nullptr)
		$var($ConstantFieldref, c3, nullptr)
		$var($String, field_class, nullptr)
		$var($String, short_field_class, nullptr)
		$var($String, field_name, nullptr)
		$var($ConstantClass, c4, nullptr)
		$var($String, class_name2, nullptr)
		$var($String, short_class_name, nullptr)
		$var($ConstantString, c5, nullptr)
		$var($String, str, nullptr)
		$var($ConstantNameAndType, c6, nullptr)
		int32_t signature_index = 0;
		switch (tag) {
		case $Const::CONSTANT_InterfaceMethodref:
			{}
		case $Const::CONSTANT_Methodref:
			{
				if (tag == $Const::CONSTANT_Methodref) {
					$var($ConstantMethodref, c, $cast($ConstantMethodref, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_Methodref)));
					class_index = $nc(c)->getClassIndex();
					name_index = c->getNameAndTypeIndex();
				} else {
					$var($ConstantInterfaceMethodref, c1, $cast($ConstantInterfaceMethodref, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_InterfaceMethodref)));
					class_index = $nc(c1)->getClassIndex();
					name_index = c1->getNameAndTypeIndex();
				}
				$assign(method_name, $nc(this->constantPool)->constantToString(name_index, $Const::CONSTANT_NameAndType));
				$assign(html_method_name, $Class2HTML::toHTML(method_name));
				$assign(method_class, $nc(this->constantPool)->constantToString(class_index, $Const::CONSTANT_Class));
				$assign(short_method_class, $Utility::compactClassName(method_class));
				$assign(short_method_class, $Utility::compactClassName(short_method_class, $$str({this->classPackage, "."_s}), true));
				$assign(c2, $cast($ConstantNameAndType, $nc(this->constantPool)->getConstant(name_index, $Const::CONSTANT_NameAndType)));
				$assign(signature, $nc(this->constantPool)->constantToString($nc(c2)->getSignatureIndex(), $Const::CONSTANT_Utf8));
				$assign(args, $Utility::methodSignatureArgumentTypes(signature, false));
				$assign(type, $Utility::methodSignatureReturnType(signature, false));
				$assign(ret_type, $Class2HTML::referenceType(type));
				$assign(buf, $new($StringBuilder, "("_s));
				for (int32_t i = 0; i < $nc(args)->length; ++i) {
					$nc(buf)->append($($Class2HTML::referenceType(args->get(i))));
					if (i < args->length - 1) {
						buf->append(",&nbsp;"_s);
					}
				}
				$nc(buf)->append(")"_s);
				$assign(arg_types, $nc(buf)->toString());
				if ($nc(method_class)->equals(this->className)) {
					$assign(ref, $str({"<A HREF=\""_s, this->className, "_code.html#method"_s, $$str(getMethodNumber($$str({method_name, signature}))), "\" TARGET=Code>"_s, html_method_name, "</A>"_s}));
				} else {
					$assign(ref, $str({"<A HREF=\""_s, method_class, ".html\" TARGET=_top>"_s, short_method_class, "</A>."_s, html_method_name}));
				}
				$nc(this->constantRef)->set(index, $$str({ret_type, "&nbsp;<A HREF=\""_s, this->className, "_cp.html#cp"_s, $$str(class_index), "\" TARGET=Constants>"_s, short_method_class, "</A>.<A HREF=\""_s, this->className, "_cp.html#cp"_s, $$str(index), "\" TARGET=ConstantPool>"_s, html_method_name, "</A>&nbsp;"_s, arg_types}));
				$nc(this->file)->println($$str({"<P><TT>"_s, ret_type, "&nbsp;"_s, ref, arg_types, "&nbsp;</TT>\n<UL><LI><A HREF=\"#cp"_s, $$str(class_index), "\">Class index("_s, $$str(class_index), ")</A>\n<LI><A HREF=\"#cp"_s, $$str(name_index), "\">NameAndType index("_s, $$str(name_index), ")</A></UL>"_s}));
				break;
			}
		case $Const::CONSTANT_Fieldref:
			{
				$assign(c3, $cast($ConstantFieldref, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_Fieldref)));
				class_index = $nc(c3)->getClassIndex();
				name_index = $nc(c3)->getNameAndTypeIndex();
				$assign(field_class, $nc(this->constantPool)->constantToString(class_index, $Const::CONSTANT_Class));
				$assign(short_field_class, $Utility::compactClassName(field_class));
				$assign(short_field_class, $Utility::compactClassName(short_field_class, $$str({this->classPackage, "."_s}), true));
				$assign(field_name, $nc(this->constantPool)->constantToString(name_index, $Const::CONSTANT_NameAndType));
				if ($nc(field_class)->equals(this->className)) {
					$assign(ref, $str({"<A HREF=\""_s, field_class, "_methods.html#field"_s, field_name, "\" TARGET=Methods>"_s, field_name, "</A>"_s}));
				} else {
					$assign(ref, $str({"<A HREF=\""_s, field_class, ".html\" TARGET=_top>"_s, short_field_class, "</A>."_s, field_name, "\n"_s}));
				}
				$nc(this->constantRef)->set(index, $$str({"<A HREF=\""_s, this->className, "_cp.html#cp"_s, $$str(class_index), "\" TARGET=Constants>"_s, short_field_class, "</A>.<A HREF=\""_s, this->className, "_cp.html#cp"_s, $$str(index), "\" TARGET=ConstantPool>"_s, field_name, "</A>"_s}));
				$nc(this->file)->println($$str({"<P><TT>"_s, ref, "</TT><BR>\n<UL><LI><A HREF=\"#cp"_s, $$str(class_index), "\">Class("_s, $$str(class_index), ")</A><BR>\n<LI><A HREF=\"#cp"_s, $$str(name_index), "\">NameAndType("_s, $$str(name_index), ")</A></UL>"_s}));
				break;
			}
		case $Const::CONSTANT_Class:
			{
				$assign(c4, $cast($ConstantClass, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_Class)));
				name_index = $nc(c4)->getNameIndex();
				$assign(class_name2, $nc(this->constantPool)->constantToString(index, tag));
				$assign(short_class_name, $Utility::compactClassName(class_name2));
				$assign(short_class_name, $Utility::compactClassName(short_class_name, $$str({this->classPackage, "."_s}), true));
				$assign(ref, $str({"<A HREF=\""_s, class_name2, ".html\" TARGET=_top>"_s, short_class_name, "</A>"_s}));
				$nc(this->constantRef)->set(index, $$str({"<A HREF=\""_s, this->className, "_cp.html#cp"_s, $$str(index), "\" TARGET=ConstantPool>"_s, short_class_name, "</A>"_s}));
				$nc(this->file)->println($$str({"<P><TT>"_s, ref, "</TT><UL><LI><A HREF=\"#cp"_s, $$str(name_index), "\">Name index("_s, $$str(name_index), ")</A></UL>\n"_s}));
				break;
			}
		case $Const::CONSTANT_String:
			{
				$assign(c5, $cast($ConstantString, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_String)));
				name_index = $nc(c5)->getStringIndex();
				$assign(str, $Class2HTML::toHTML($($nc(this->constantPool)->constantToString(index, tag))));
				$nc(this->file)->println($$str({"<P><TT>"_s, str, "</TT><UL><LI><A HREF=\"#cp"_s, $$str(name_index), "\">Name index("_s, $$str(name_index), ")</A></UL>\n"_s}));
				break;
			}
		case $Const::CONSTANT_NameAndType:
			{
				$assign(c6, $cast($ConstantNameAndType, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_NameAndType)));
				name_index = $nc(c6)->getNameIndex();
				signature_index = $nc(c6)->getSignatureIndex();
				$nc(this->file)->println($$str({"<P><TT>"_s, $($Class2HTML::toHTML($($nc(this->constantPool)->constantToString(index, tag)))), "</TT><UL><LI><A HREF=\"#cp"_s, $$str(name_index), "\">Name index("_s, $$str(name_index), ")</A>\n<LI><A HREF=\"#cp"_s, $$str(signature_index), "\">Signature index("_s, $$str(signature_index), ")</A></UL>\n"_s}));
				break;
			}
		default:
			{
				$nc(this->file)->println($$str({"<P><TT>"_s, $($Class2HTML::toHTML($($nc(this->constantPool)->constantToString(index, tag)))), "</TT>\n"_s}));
			}
		}
	}
}

int32_t ConstantHTML::getMethodNumber($String* str) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->methods)->length; ++i) {
		$var($String, var$0, $($nc($nc(this->methods)->get(i))->getName()));
		$var($String, cmp, $concat(var$0, $($nc($nc(this->methods)->get(i))->getSignature())));
		if ($nc(cmp)->equals(str)) {
			return i;
		}
	}
	return -1;
}

ConstantHTML::ConstantHTML() {
}

$Class* ConstantHTML::load$($String* name, bool initialize) {
	$loadClass(ConstantHTML, name, initialize, &_ConstantHTML_ClassInfo_, allocate$ConstantHTML);
	return class$;
}

$Class* ConstantHTML::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com