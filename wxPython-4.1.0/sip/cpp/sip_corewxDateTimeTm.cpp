/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/datetime.h>
            #include <wx/datetime.h>

        #include <wx/datetime.h>


PyDoc_STRVAR(doc_wxDateTime_Tm_IsValid, "IsValid() -> bool\n"
"\n"
"Check if the given date/time is valid (in Gregorian calendar).");

extern "C" {static PyObject *meth_wxDateTime_Tm_IsValid(PyObject *, PyObject *);}
static PyObject *meth_wxDateTime_Tm_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDateTime::Tm *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDateTime_Tm, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsValid();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Tm, sipName_IsValid, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDateTime_Tm_GetWeekDay, "GetWeekDay() -> DateTime.WeekDay\n"
"\n"
"Return the week day corresponding to this date.");

extern "C" {static PyObject *meth_wxDateTime_Tm_GetWeekDay(PyObject *, PyObject *);}
static PyObject *meth_wxDateTime_Tm_GetWeekDay(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDateTime::Tm *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDateTime_Tm, &sipCpp))
        {
             ::wxDateTime::WeekDay sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWeekDay();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDateTime_WeekDay);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Tm, sipName_GetWeekDay, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDateTime_Tm(void *, int);}
static void release_wxDateTime_Tm(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxDateTime::Tm *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxDateTime_Tm(void *, SIP_SSIZE_T, void *);}
static void assign_wxDateTime_Tm(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxDateTime::Tm *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxDateTime::Tm *>(sipSrc);
}


extern "C" {static void *array_wxDateTime_Tm(SIP_SSIZE_T);}
static void *array_wxDateTime_Tm(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxDateTime::Tm[sipNrElem];
}


extern "C" {static void *copy_wxDateTime_Tm(const void *, SIP_SSIZE_T);}
static void *copy_wxDateTime_Tm(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxDateTime::Tm(reinterpret_cast<const  ::wxDateTime::Tm *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxDateTime_Tm(sipSimpleWrapper *);}
static void dealloc_wxDateTime_Tm(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDateTime_Tm(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxDateTime_Tm(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDateTime_Tm(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxDateTime::Tm *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDateTime::Tm();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxDateTime::Tm* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxDateTime_Tm, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDateTime::Tm(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxDateTime_Tm[] = {
    {SIP_MLNAME_CAST(sipName_GetWeekDay), meth_wxDateTime_Tm_GetWeekDay, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDateTime_Tm_GetWeekDay)},
    {SIP_MLNAME_CAST(sipName_IsValid), meth_wxDateTime_Tm_IsValid, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDateTime_Tm_IsValid)}
};


extern "C" {static PyObject *varget_wxDateTime_Tm_hour(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_hour(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->hour;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_hour(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_hour(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->hour = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_mday(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_mday(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->mday;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_mday(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_mday(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->mday = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_min(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_min(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->min;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_min(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_min(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->min = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_mon(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_mon(void *sipSelf, PyObject *, PyObject *)
{
     ::wxDateTime::Month sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->mon;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_wxDateTime_Month);
}


extern "C" {static int varset_wxDateTime_Tm_mon(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_mon(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxDateTime::Month sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = ( ::wxDateTime::Month)sipConvertToEnum(sipPy, sipType_wxDateTime_Month);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->mon = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_msec(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_msec(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->msec;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_msec(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_msec(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->msec = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_sec(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_sec(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->sec;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_sec(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_sec(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->sec = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_yday(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_yday(void *sipSelf, PyObject *, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->yday;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxDateTime_Tm_yday(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_yday(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned short sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsUnsignedShort(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->yday = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxDateTime_Tm_year(void *, PyObject *, PyObject *);}
static PyObject *varget_wxDateTime_Tm_year(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipCpp->year;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxDateTime_Tm_year(void *, PyObject *, PyObject *);}
static int varset_wxDateTime_Tm_year(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxDateTime::Tm *sipCpp = reinterpret_cast< ::wxDateTime::Tm *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->year = sipVal;

    return 0;
}

sipVariableDef variables_wxDateTime_Tm[] = {
    {PropertyVariable, sipName_WeekDay, &methods_wxDateTime_Tm[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_hour, (PyMethodDef *)varget_wxDateTime_Tm_hour, (PyMethodDef *)varset_wxDateTime_Tm_hour, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mday, (PyMethodDef *)varget_wxDateTime_Tm_mday, (PyMethodDef *)varset_wxDateTime_Tm_mday, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_min, (PyMethodDef *)varget_wxDateTime_Tm_min, (PyMethodDef *)varset_wxDateTime_Tm_min, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mon, (PyMethodDef *)varget_wxDateTime_Tm_mon, (PyMethodDef *)varset_wxDateTime_Tm_mon, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_msec, (PyMethodDef *)varget_wxDateTime_Tm_msec, (PyMethodDef *)varset_wxDateTime_Tm_msec, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_sec, (PyMethodDef *)varget_wxDateTime_Tm_sec, (PyMethodDef *)varset_wxDateTime_Tm_sec, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_yday, (PyMethodDef *)varget_wxDateTime_Tm_yday, (PyMethodDef *)varset_wxDateTime_Tm_yday, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_year, (PyMethodDef *)varget_wxDateTime_Tm_year, (PyMethodDef *)varset_wxDateTime_Tm_year, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDateTime_Tm, "Contains broken down date-time representation.");


sipClassTypeDef sipTypeDef__core_wxDateTime_Tm = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxDateTime__Tm,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Tm,
        {115, 255, 0},
        2, methods_wxDateTime_Tm,
        0, SIP_NULLPTR,
        9, variables_wxDateTime_Tm,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDateTime_Tm,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDateTime_Tm,
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
    dealloc_wxDateTime_Tm,
    assign_wxDateTime_Tm,
    array_wxDateTime_Tm,
    copy_wxDateTime_Tm,
    release_wxDateTime_Tm,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};