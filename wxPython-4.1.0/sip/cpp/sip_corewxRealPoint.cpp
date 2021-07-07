/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/gdicmn.h>

        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
    bool _wxRealPoint___eq__(wxRealPoint* self, const wxRealPoint* other)
    {
        return *self == *other;
    }
    bool _wxRealPoint___ne__(wxRealPoint* self, const wxRealPoint* other)
    {
        return *self != *other;
    }
    wxRealPoint* _wxRealPoint___mul__(wxRealPoint* self, double d)
    {
        return new wxRealPoint(self->x * d, self->y * d);
    }
    PyObject* _wxRealPoint_Get(wxRealPoint* self)
    {
        wxPyThreadBlocker blocker;
        return sipBuildResult(0, "(dd)", self->x, self->y);
    }


PyDoc_STRVAR(doc_wxRealPoint_Get, "Get() -> (x, y)\n"
"\n"
"Return the point's properties as a tuple.");

extern "C" {static PyObject *meth_wxRealPoint_Get(PyObject *, PyObject *);}
static PyObject *meth_wxRealPoint_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRealPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRealPoint, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRealPoint_Get(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RealPoint, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxRealPoint___mul__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRealPoint* a0;
        int a0State = 0;
        double d;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1d", sipType_wxRealPoint, &a0, &a0State, &d))
        {
             ::wxRealPoint*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRealPoint___mul__(a0, d);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(a0,sipType_wxRealPoint,a0State);

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_wxRealPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, mul_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___div__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRealPoint* a0;
        int a0State = 0;
        int i;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_wxRealPoint, &a0, &a0State, &i))
        {
             ::wxRealPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRealPoint((*a0 / i));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxRealPoint,a0State);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, div_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___sub__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRealPoint* a0;
        int a0State = 0;
        const  ::wxRealPoint* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxRealPoint, &a0, &a0State, sipType_wxRealPoint, &other, &otherState))
        {
             ::wxRealPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRealPoint((*a0 - *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxRealPoint,a0State);
            sipReleaseType(const_cast< ::wxRealPoint *>(other),sipType_wxRealPoint,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, sub_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___add__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRealPoint* a0;
        int a0State = 0;
        const  ::wxRealPoint* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxRealPoint, &a0, &a0State, sipType_wxRealPoint, &other, &otherState))
        {
             ::wxRealPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRealPoint((*a0 + *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxRealPoint,a0State);
            sipReleaseType(const_cast< ::wxRealPoint *>(other),sipType_wxRealPoint,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, add_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRealPoint* other;
        int otherState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxRealPoint, &other, &otherState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRealPoint___ne__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxRealPoint *>(other),sipType_wxRealPoint,otherState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxRealPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxRealPoint___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRealPoint* other;
        int otherState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxRealPoint, &other, &otherState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRealPoint___eq__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxRealPoint *>(other),sipType_wxRealPoint,otherState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxRealPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxRealPoint___isub__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxRealPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSize* sz;
        int szState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxSize, &sz, &szState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxRealPoint::operator-=(*sz);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(sz),sipType_wxSize,szState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::wxRealPoint* pt;
        int ptState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxRealPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxRealPoint::operator-=(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRealPoint *>(pt),sipType_wxRealPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_wxRealPoint___iadd__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxRealPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSize* sz;
        int szState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxSize, &sz, &szState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxRealPoint::operator+=(*sz);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(sz),sipType_wxSize,szState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::wxRealPoint* pt;
        int ptState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxRealPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxRealPoint::operator+=(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRealPoint *>(pt),sipType_wxRealPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRealPoint(void *, int);}
static void release_wxRealPoint(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRealPoint *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxRealPoint(void *, SIP_SSIZE_T, void *);}
static void assign_wxRealPoint(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxRealPoint *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxRealPoint *>(sipSrc);
}


extern "C" {static void *array_wxRealPoint(SIP_SSIZE_T);}
static void *array_wxRealPoint(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxRealPoint[sipNrElem];
}


extern "C" {static void *copy_wxRealPoint(const void *, SIP_SSIZE_T);}
static void *copy_wxRealPoint(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxRealPoint(reinterpret_cast<const  ::wxRealPoint *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxRealPoint(sipSimpleWrapper *);}
static void dealloc_wxRealPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRealPoint(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxRealPoint(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRealPoint(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxRealPoint *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRealPoint();
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
        double x;
        double y;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "dd", &x, &y))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRealPoint(x,y);
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
        const  ::wxPoint* pt;
        int ptState = 0;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRealPoint(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxRealPoint* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_wxRealPoint, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRealPoint(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRealPoint *>(a0),sipType_wxRealPoint,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_wxRealPoint(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxRealPoint(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxRealPoint **sipCppPtr = reinterpret_cast< ::wxRealPoint **>(sipCppPtrV);

        // is it just a typecheck?
        if (!sipIsErr) {
            // is it already an instance of wxRealPoint?
            if (sipCanConvertToType(sipPy, sipType_wxRealPoint, SIP_NO_CONVERTORS))
                return 1;
        
           if (wxPyNumberSequenceCheck(sipPy, 2)) {
               return 1;
           }
            return 0;
        }
        
        // otherwise do the conversion
        if (sipCanConvertToType(sipPy, sipType_wxRealPoint, SIP_NO_CONVERTORS)) {
            // Just fetch the existing instance
            *sipCppPtr = reinterpret_cast<wxRealPoint*>(sipConvertToType(
                    sipPy, sipType_wxRealPoint, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));
            return 0; // not a new instance
        }
        
        // or create a new instance
        PyObject* o1 = PySequence_ITEM(sipPy, 0);
        PyObject* o2 = PySequence_ITEM(sipPy, 1);
        *sipCppPtr = new wxRealPoint(PyFloat_AsDouble(o1), PyFloat_AsDouble(o2));
        Py_DECREF(o1);
        Py_DECREF(o2);
        return SIP_TEMPORARY;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxRealPoint[] = {
    {(void *)slot_wxRealPoint___mul__, mul_slot},
    {(void *)slot_wxRealPoint___div__, div_slot},
    {(void *)slot_wxRealPoint___sub__, sub_slot},
    {(void *)slot_wxRealPoint___add__, add_slot},
    {(void *)slot_wxRealPoint___ne__, ne_slot},
    {(void *)slot_wxRealPoint___eq__, eq_slot},
    {(void *)slot_wxRealPoint___isub__, isub_slot},
    {(void *)slot_wxRealPoint___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxRealPoint[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_wxRealPoint_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRealPoint_Get)}
};


extern "C" {static PyObject *varget_wxRealPoint_x(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRealPoint_x(void *sipSelf, PyObject *, PyObject *)
{
    double sipVal;
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxRealPoint_x(void *, PyObject *, PyObject *);}
static int varset_wxRealPoint_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxRealPoint_y(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRealPoint_y(void *sipSelf, PyObject *, PyObject *)
{
    double sipVal;
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxRealPoint_y(void *, PyObject *, PyObject *);}
static int varset_wxRealPoint_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
     ::wxRealPoint *sipCpp = reinterpret_cast< ::wxRealPoint *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_wxRealPoint[] = {
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_wxRealPoint_x, (PyMethodDef *)varset_wxRealPoint_x, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_wxRealPoint_y, (PyMethodDef *)varset_wxRealPoint_y, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRealPoint, "RealPoint()\n"
"RealPoint(x, y)\n"
"RealPoint(pt)\n"
"\n"
"A wxRealPoint is a useful data structure for graphics operations.");


sipClassTypeDef sipTypeDef__core_wxRealPoint = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxRealPoint,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RealPoint,
        {0, 0, 1},
        1, methods_wxRealPoint,
        0, SIP_NULLPTR,
        2, variables_wxRealPoint,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRealPoint,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxRealPoint,
    init_type_wxRealPoint,
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
    dealloc_wxRealPoint,
    assign_wxRealPoint,
    array_wxRealPoint,
    copy_wxRealPoint,
    release_wxRealPoint,
    SIP_NULLPTR,
    convertTo_wxRealPoint,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};