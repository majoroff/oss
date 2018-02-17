;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname result-quiz) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)


;; Design a function that consumes two images and produces true if the first is larger than the second.

;; Image Image -> Boolean

;; given 2 images, produce true if first image is larger than second
;; NOTE: larger means that area of first image is larger than area of second image

(check-expect (first-larger? (rectangle 2 3 "solid" "black") (rectangle 3 4 "solid" "red")) false)
(check-expect (first-larger? (rectangle 3 4 "solid" "black") (rectangle 3 3 "solid" "red")) true)
(check-expect (first-larger? (rectangle 4 4 "solid" "black") (circle 2 "solid" "red")) false)

; (define (first-larger? img1 img2) true) ; stub

;(define (first-larger? img1 img2) ; template
;  (... img1 img2))

(define (first-larger? img1 img2)
  (> (* (image-height img1) (image-width img1)) (* (image-height img2) (image-width img2))))




