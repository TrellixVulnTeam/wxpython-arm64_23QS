/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/property.h>



PyDoc_STRVAR(doc_wxPGAttributeStorage_Set, "Set(name, value)");

extern "C" {static PyObject *meth_wxPGAttributeStorage_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGAttributeStorage_Set(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
        const  ::wxPGVariant* value;
        int valueState = 0;
         ::wxPGAttributeStorage *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxPGAttributeStorage, &sipCpp, sipType_wxString,&name, &nameState, sipType_wxPGVariant,&value, &valueState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Set(*name,*value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);
            sipReleaseType(const_cast< ::wxPGVariant *>(value),sipType_wxPGVariant,valueState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGAttributeStorage, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGAttributeStorage_GetCount, "GetCount() -> unsignedint");

extern "C" {static PyObject *meth_wxPGAttributeStorage_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxPGAttributeStorage_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGAttributeStorage *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGAttributeStorage, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCount();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGAttributeStorage, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGAttributeStorage_FindValue, "FindValue(name) -> PGVariant");

extern "C" {static PyObject *meth_wxPGAttributeStorage_FindValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGAttributeStorage_FindValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
        const  ::wxPGAttributeStorage *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPGAttributeStorage, &sipCpp, sipType_wxString,&name, &nameState))
        {
             ::wxPGVariant*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPGVariant(sipCpp->FindValue(*name));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPGVariant,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGAttributeStorage, sipName_FindValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGAttributeStorage(void *, int);}
static void release_wxPGAttributeStorage(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPGAttributeStorage *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPGAttributeStorage(void *, SIP_SSIZE_T, void *);}
static void assign_wxPGAttributeStorage(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPGAttributeStorage *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPGAttributeStorage *>(sipSrc);
}


extern "C" {static void *array_wxPGAttributeStorage(SIP_SSIZE_T);}
static void *array_wxPGAttributeStorage(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPGAttributeStorage[sipNrElem];
}


extern "C" {static void *copy_wxPGAttributeStorage(const void *, SIP_SSIZE_T);}
static void *copy_wxPGAttributeStorage(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPGAttributeStorage(reinterpret_cast<const  ::wxPGAttributeStorage *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPGAttributeStorage(sipSimpleWrapper *);}
static void dealloc_wxPGAttributeStorage(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGAttributeStorage(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPGAttributeStorage(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGAttributeStorage(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPGAttributeStorage *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPGAttributeStorage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxPGAttributeStorage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPGAttributeStorage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPGAttributeStorage(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPGAttributeStorage[] = {
    {SIP_MLNAME_CAST(sipName_FindValue), SIP_MLMETH_CAST(meth_wxPGAttributeStorage_FindValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGAttributeStorage_FindValue)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxPGAttributeStorage_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPGAttributeStorage_GetCount)},
    {SIP_MLNAME_CAST(sipName_Set), SIP_MLMETH_CAST(meth_wxPGAttributeStorage_Set), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGAttributeStorage_Set)}
};

sipVariableDef variables_wxPGAttributeStorage[] = {
    {PropertyVariable, sipName_Count, &methods_wxPGAttributeStorage[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPGAttributeStorage, "PGAttributeStorage()\n"
"\n"
"wxPGAttributeStorage is somewhat optimized storage for key=variant\n"
"pairs (i.e.");


sipClassTypeDef sipTypeDef__propgrid_wxPGAttributeStorage = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPGAttributeStorage,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PGAttributeStorage,
        {0, 0, 1},
        3, methods_wxPGAttributeStorage,
        0, SIP_NULLPTR,
        1, variables_wxPGAttributeStorage,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGAttributeStorage,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPGAttributeStorage,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxPGAttributeStorage,
    assign_wxPGAttributeStorage,
    array_wxPGAttributeStorage,
    copy_wxPGAttributeStorage,
    release_wxPGAttributeStorage,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};