#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValuePair.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValuePairGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $ElementValuePairArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValuePair>;
using $AnnotationEntryGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>;
using $ListArray = $Array<::java::util::List>;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValuePair = ::com::sun::org::apache::bcel::internal::classfile::ElementValuePair;
using $RuntimeInvisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeInvisibleAnnotations;
using $RuntimeInvisibleParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeInvisibleParameterAnnotations;
using $RuntimeVisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleAnnotations;
using $RuntimeVisibleParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $ElementValuePairGen = ::com::sun::org::apache::bcel::internal::generic::ElementValuePairGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _AnnotationEntryGen_FieldInfo_[] = {
	{"typeIndex", "I", nullptr, $PRIVATE, $field(AnnotationEntryGen, typeIndex)},
	{"evs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValuePairGen;>;", $PRIVATE, $field(AnnotationEntryGen, evs)},
	{"cpool", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE | $FINAL, $field(AnnotationEntryGen, cpool)},
	{"isRuntimeVisible", "Z", nullptr, $PRIVATE, $field(AnnotationEntryGen, isRuntimeVisible$)},
	{}
};

$MethodInfo _AnnotationEntryGen_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(AnnotationEntryGen, init$, void, $AnnotationEntry*, $ConstantPoolGen*, bool)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PRIVATE, $method(AnnotationEntryGen, init$, void, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;Ljava/util/List;ZLcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValuePairGen;>;ZLcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", $PUBLIC, $method(AnnotationEntryGen, init$, void, $ObjectType*, $List*, bool, $ConstantPoolGen*)},
	{"addElementNameValuePair", "(Lcom/sun/org/apache/bcel/internal/generic/ElementValuePairGen;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, addElementNameValuePair, void, $ElementValuePairGen*)},
	{"copyValues", "([Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)Ljava/util/List;", "([Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValuePairGen;>;", $PRIVATE, $method(AnnotationEntryGen, copyValues, $List*, $ElementValuePairArray*, $ConstantPoolGen*, bool)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotation", "()Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, getAnnotation, $AnnotationEntry*)},
	{"getAnnotationAttributes", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;[Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;)[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $STATIC, $staticMethod(AnnotationEntryGen, getAnnotationAttributes, $AttributeArray*, $ConstantPoolGen*, $AnnotationEntryGenArray*)},
	{"getParameterAnnotationAttributes", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;[Ljava/util/List;)[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;[Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;)[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", $STATIC, $staticMethod(AnnotationEntryGen, getParameterAnnotationAttributes, $AttributeArray*, $ConstantPoolGen*, $ListArray*)},
	{"getTypeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, getTypeIndex, int32_t)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(AnnotationEntryGen, getTypeName, $String*)},
	{"getTypeSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(AnnotationEntryGen, getTypeSignature, $String*)},
	{"getValues", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValuePairGen;>;", $PUBLIC, $virtualMethod(AnnotationEntryGen, getValues, $List*)},
	{"isRuntimeVisible", "(Z)V", nullptr, $PRIVATE, $method(AnnotationEntryGen, isRuntimeVisible, void, bool)},
	{"isRuntimeVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, isRuntimeVisible, bool)},
	{"read", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotationEntryGen, read, AnnotationEntryGen*, $DataInput*, $ConstantPoolGen*, bool), "java.io.IOException"},
	{"toShortString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, toShortString, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntryGen, toString, $String*)},
	{}
};

$ClassInfo _AnnotationEntryGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.AnnotationEntryGen",
	"java.lang.Object",
	nullptr,
	_AnnotationEntryGen_FieldInfo_,
	_AnnotationEntryGen_MethodInfo_
};

$Object* allocate$AnnotationEntryGen($Class* clazz) {
	return $of($alloc(AnnotationEntryGen));
}

void AnnotationEntryGen::init$($AnnotationEntry* a, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	this->isRuntimeVisible$ = false;
	$set(this, cpool, cpool);
	if (copyPoolEntries) {
		this->typeIndex = $nc(cpool)->addUtf8($($nc(a)->getAnnotationType()));
	} else {
		this->typeIndex = $nc(a)->getAnnotationTypeIndex();
	}
	this->isRuntimeVisible$ = $nc(a)->isRuntimeVisible();
	$set(this, evs, copyValues($(a->getElementValuePairs()), cpool, copyPoolEntries));
}

$List* AnnotationEntryGen::copyValues($ElementValuePairArray* in, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	$var($List, out, $new($ArrayList));
	{
		$var($ElementValuePairArray, arr$, in);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ElementValuePair, nvp, arr$->get(i$));
			{
				out->add($$new($ElementValuePairGen, nvp, cpool, copyPoolEntries));
			}
		}
	}
	return out;
}

void AnnotationEntryGen::init$($ConstantPoolGen* cpool) {
	this->isRuntimeVisible$ = false;
	$set(this, cpool, cpool);
}

$AnnotationEntry* AnnotationEntryGen::getAnnotation() {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationEntry, a, $new($AnnotationEntry, this->typeIndex, $($nc(this->cpool)->getConstantPool()), this->isRuntimeVisible$));
	{
		$var($Iterator, i$, $nc(this->evs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValuePairGen, element, $cast($ElementValuePairGen, i$->next()));
			{
				a->addElementNameValuePair($($nc(element)->getElementNameValuePair()));
			}
		}
	}
	return a;
}

void AnnotationEntryGen::init$($ObjectType* type, $List* elements, bool vis, $ConstantPoolGen* cpool) {
	this->isRuntimeVisible$ = false;
	$set(this, cpool, cpool);
	this->typeIndex = $nc(cpool)->addUtf8($($nc(type)->getSignature()));
	$set(this, evs, elements);
	this->isRuntimeVisible$ = vis;
}

AnnotationEntryGen* AnnotationEntryGen::read($DataInput* dis, $ConstantPoolGen* cpool, bool b) {
	$useLocalCurrentObjectStackCache();
	$var(AnnotationEntryGen, a, $new(AnnotationEntryGen, cpool));
	a->typeIndex = $nc(dis)->readUnsignedShort();
	int32_t elemValuePairCount = dis->readUnsignedShort();
	for (int32_t i = 0; i < elemValuePairCount; ++i) {
		int32_t nidx = dis->readUnsignedShort();
		a->addElementNameValuePair($$new($ElementValuePairGen, nidx, $($ElementValueGen::readElementValue(dis, cpool)), cpool));
	}
	a->isRuntimeVisible(b);
	return a;
}

void AnnotationEntryGen::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$nc(dos)->writeShort(this->typeIndex);
	dos->writeShort($nc(this->evs)->size());
	{
		$var($Iterator, i$, $nc(this->evs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValuePairGen, envp, $cast($ElementValuePairGen, i$->next()));
			{
				$nc(envp)->dump(dos);
			}
		}
	}
}

void AnnotationEntryGen::addElementNameValuePair($ElementValuePairGen* evp) {
	if (this->evs == nullptr) {
		$set(this, evs, $new($ArrayList));
	}
	$nc(this->evs)->add(evp);
}

int32_t AnnotationEntryGen::getTypeIndex() {
	return this->typeIndex;
}

$String* AnnotationEntryGen::getTypeSignature() {
	$var($ConstantUtf8, utf8, $cast($ConstantUtf8, $nc(this->cpool)->getConstant(this->typeIndex)));
	return $nc(utf8)->getBytes();
}

$String* AnnotationEntryGen::getTypeName() {
	return getTypeSignature();
}

$List* AnnotationEntryGen::getValues() {
	return this->evs;
}

$String* AnnotationEntryGen::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder, 32));
	s->append("AnnotationGen:["_s)->append($(getTypeName()))->append(" #"_s)->append($nc(this->evs)->size())->append(" {"_s);
	for (int32_t i = 0; i < $nc(this->evs)->size(); ++i) {
		s->append($($nc(this->evs)->get(i)));
		if (i + 1 < $nc(this->evs)->size()) {
			s->append(","_s);
		}
	}
	s->append("}]"_s);
	return s->toString();
}

$String* AnnotationEntryGen::toShortString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder));
	s->append("@"_s)->append($(getTypeName()))->append("("_s);
	for (int32_t i = 0; i < $nc(this->evs)->size(); ++i) {
		s->append($($nc(this->evs)->get(i)));
		if (i + 1 < $nc(this->evs)->size()) {
			s->append(","_s);
		}
	}
	s->append(")"_s);
	return s->toString();
}

void AnnotationEntryGen::isRuntimeVisible(bool b) {
	this->isRuntimeVisible$ = b;
}

bool AnnotationEntryGen::isRuntimeVisible() {
	return this->isRuntimeVisible$;
}

$AttributeArray* AnnotationEntryGen::getAnnotationAttributes($ConstantPoolGen* cp, $AnnotationEntryGenArray* annotationEntryGens) {
	$useLocalCurrentObjectStackCache();
	if ($nc(annotationEntryGens)->length == 0) {
		return $new($AttributeArray, 0);
	}
	try {
		int32_t countVisible = 0;
		int32_t countInvisible = 0;
		{
			$var($AnnotationEntryGenArray, arr$, annotationEntryGens);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(AnnotationEntryGen, a, arr$->get(i$));
				{
					if ($nc(a)->isRuntimeVisible()) {
						++countVisible;
					} else {
						++countInvisible;
					}
				}
			}
		}
		$var($ByteArrayOutputStream, rvaBytes, $new($ByteArrayOutputStream));
		$var($ByteArrayOutputStream, riaBytes, $new($ByteArrayOutputStream));
		{
			$var($DataOutputStream, rvaDos, $new($DataOutputStream, rvaBytes));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($DataOutputStream, riaDos, $new($DataOutputStream, riaBytes));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									rvaDos->writeShort(countVisible);
									riaDos->writeShort(countInvisible);
									{
										$var($AnnotationEntryGenArray, arr$, annotationEntryGens);
										int32_t len$ = $nc(arr$)->length;
										int32_t i$ = 0;
										for (; i$ < len$; ++i$) {
											$var(AnnotationEntryGen, a, arr$->get(i$));
											{
												if ($nc(a)->isRuntimeVisible()) {
													a->dump(rvaDos);
												} else {
													a->dump(riaDos);
												}
											}
										}
									}
								} catch ($Throwable& t$) {
									try {
										riaDos->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								riaDos->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable& t$) {
						try {
							rvaDos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					rvaDos->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$var($bytes, rvaData, rvaBytes->toByteArray());
		$var($bytes, riaData, riaBytes->toByteArray());
		int32_t rvaIndex = -1;
		int32_t riaIndex = -1;
		if ($nc(rvaData)->length > 2) {
			rvaIndex = $nc(cp)->addUtf8("RuntimeVisibleAnnotations"_s);
		}
		if ($nc(riaData)->length > 2) {
			riaIndex = $nc(cp)->addUtf8("RuntimeInvisibleAnnotations"_s);
		}
		$var($List, newAttributes, $new($ArrayList));
		if ($nc(rvaData)->length > 2) {
			int32_t var$4 = rvaIndex;
			int32_t var$5 = rvaData->length;
			$var($DataInput, var$6, static_cast<$DataInput*>($new($DataInputStream, $$new($ByteArrayInputStream, rvaData))));
			newAttributes->add($$new($RuntimeVisibleAnnotations, var$4, var$5, var$6, $($nc(cp)->getConstantPool())));
		}
		if ($nc(riaData)->length > 2) {
			int32_t var$7 = riaIndex;
			int32_t var$8 = riaData->length;
			$var($DataInput, var$9, static_cast<$DataInput*>($new($DataInputStream, $$new($ByteArrayInputStream, riaData))));
			newAttributes->add($$new($RuntimeInvisibleAnnotations, var$7, var$8, var$9, $($nc(cp)->getConstantPool())));
		}
		return $fcast($AttributeArray, newAttributes->toArray($$new($AttributeArray, newAttributes->size())));
	} catch ($IOException& e) {
		$nc($System::err)->println("IOException whilst processing annotations"_s);
		e->printStackTrace();
	}
	return nullptr;
}

$AttributeArray* AnnotationEntryGen::getParameterAnnotationAttributes($ConstantPoolGen* cp, $ListArray* vec) {
	$useLocalCurrentObjectStackCache();
	$var($ints, visCount, $new($ints, $nc(vec)->length));
	int32_t totalVisCount = 0;
	$var($ints, invisCount, $new($ints, vec->length));
	int32_t totalInvisCount = 0;
	try {
		for (int32_t i = 0; i < vec->length; ++i) {
			if (vec->get(i) != nullptr) {
				{
					$var($Iterator, i$, $nc(vec->get(i))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var(AnnotationEntryGen, element, $cast(AnnotationEntryGen, i$->next()));
						{
							if ($nc(element)->isRuntimeVisible()) {
								++(*visCount)[i];
								++totalVisCount;
							} else {
								++(*invisCount)[i];
								++totalInvisCount;
							}
						}
					}
				}
			}
		}
		$var($ByteArrayOutputStream, rvaBytes, $new($ByteArrayOutputStream));
		{
			$var($DataOutputStream, rvaDos, $new($DataOutputStream, rvaBytes));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						rvaDos->writeByte(vec->length);
						for (int32_t i = 0; i < vec->length; ++i) {
							rvaDos->writeShort(visCount->get(i));
							if (visCount->get(i) > 0) {
								{
									$var($Iterator, i$, $nc(vec->get(i))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var(AnnotationEntryGen, element, $cast(AnnotationEntryGen, i$->next()));
										{
											if ($nc(element)->isRuntimeVisible()) {
												element->dump(rvaDos);
											}
										}
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						try {
							rvaDos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					rvaDos->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$var($ByteArrayOutputStream, riaBytes, $new($ByteArrayOutputStream));
		{
			$var($DataOutputStream, riaDos, $new($DataOutputStream, riaBytes));
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						riaDos->writeByte(vec->length);
						for (int32_t i = 0; i < vec->length; ++i) {
							riaDos->writeShort(invisCount->get(i));
							if (invisCount->get(i) > 0) {
								{
									$var($Iterator, i$, $nc(vec->get(i))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var(AnnotationEntryGen, element, $cast(AnnotationEntryGen, i$->next()));
										{
											if (!$nc(element)->isRuntimeVisible()) {
												element->dump(riaDos);
											}
										}
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						try {
							riaDos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					riaDos->close();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
		$var($bytes, rvaData, rvaBytes->toByteArray());
		$var($bytes, riaData, riaBytes->toByteArray());
		int32_t rvaIndex = -1;
		int32_t riaIndex = -1;
		if (totalVisCount > 0) {
			rvaIndex = $nc(cp)->addUtf8("RuntimeVisibleParameterAnnotations"_s);
		}
		if (totalInvisCount > 0) {
			riaIndex = $nc(cp)->addUtf8("RuntimeInvisibleParameterAnnotations"_s);
		}
		$var($List, newAttributes, $new($ArrayList));
		if (totalVisCount > 0) {
			int32_t var$4 = rvaIndex;
			int32_t var$5 = $nc(rvaData)->length;
			$var($DataInput, var$6, static_cast<$DataInput*>($new($DataInputStream, $$new($ByteArrayInputStream, rvaData))));
			newAttributes->add($$new($RuntimeVisibleParameterAnnotations, var$4, var$5, var$6, $($nc(cp)->getConstantPool())));
		}
		if (totalInvisCount > 0) {
			int32_t var$7 = riaIndex;
			int32_t var$8 = $nc(riaData)->length;
			$var($DataInput, var$9, static_cast<$DataInput*>($new($DataInputStream, $$new($ByteArrayInputStream, riaData))));
			newAttributes->add($$new($RuntimeInvisibleParameterAnnotations, var$7, var$8, var$9, $($nc(cp)->getConstantPool())));
		}
		return $fcast($AttributeArray, newAttributes->toArray($$new($AttributeArray, newAttributes->size())));
	} catch ($IOException& e) {
		$nc($System::err)->println($$str({"IOException whilst processing parameter annotations."_s, $(e->getMessage())}));
	}
	return nullptr;
}

AnnotationEntryGen::AnnotationEntryGen() {
}

$Class* AnnotationEntryGen::load$($String* name, bool initialize) {
	$loadClass(AnnotationEntryGen, name, initialize, &_AnnotationEntryGen_ClassInfo_, allocate$AnnotationEntryGen);
	return class$;
}

$Class* AnnotationEntryGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com